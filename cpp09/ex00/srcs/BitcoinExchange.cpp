/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/26 16:24:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const &filename) : 
	_filename(filename)
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy) : 
	_filename(cpy._filename)
{}

BitcoinExchange::~BitcoinExchange() 
{}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) 
{	
	if (this != &rhs)
		_filename = rhs._filename;
	return (*this);
}

static float find_date_in_db_and_get_btc_price(std::string const &date, std::map<std::string, float> &database)
{
	float price;
	std::map<std::string, float>::const_iterator it = database.find(date);
	std::map<std::string, float>::iterator previous_date;
	
	if (it == database.end())
	{
		previous_date = database.upper_bound(date);
    	if (previous_date == database.begin()){
      		std::cout << "Error: Unknow date" << std::endl;}
			
		price = previous_date->second;
	}
	else 
		price = it->second;
	return (price);
}

bool BitcoinExchange::is_valid_date(std::string const &date)
{
	std::string day_str, month_str, year_str;
	long		day, month, year;
	bool 		error = 0;
	
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    	return (false);
		
  	day_str = date.substr(8, 2);
  	month_str = date.substr(5, 2);
	year_str = date.substr(0, 4);
	
	day = strtol(day_str.c_str(), NULL, 10);
	month = strtol(month_str.c_str(), NULL, 10);
	year = strtol(year_str.c_str(), NULL, 10);

	if (!is_digit(day_str) || !is_digit(month_str) || !is_digit(year_str))
		return (std::cout << "Error: non-digit character in the date" << std::endl, false);
	else if (day < 1 || day > 31)
		error |= 1;
	else if (month < 1 || month > 12)
		error |= 1;
	else if (year < 2009 || year > 2050)
		error |= 1;
	else if (month == 2)
	{
		if (is_leap(year))
		{
			if (day > 29)
				error |= 1;
		}
		else if (day > 28)
			error |= 1;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		error |= 1;
	// check if its in the db
	if (error)
		return (std::cout << "Error: invalid date" << std::endl, false);
	_date = date;
	return (true);
}

bool	BitcoinExchange::is_valid_value(std::string const &value) 
{
	if (!is_int(value) && !is_double(value) && !is_float(value))
		return (std::cout << "Error: invalid value" << std::endl, false);

	float value_f;
	std::istringstream(value) >> value_f;
	
	if (value_f > 1000)
		return (std::cout << "Error: too large number" << std::endl, false);
	else if (value_f < 0)
		return (std::cout << "Error: negative number" << std::endl, false);
	_value = value_f;
	return (true);
}

bool	BitcoinExchange::parse_line(std::string &line)
{
	std::istringstream	iss(line);
	std::string			date, value_str;

	if (!std::getline(iss, date, '|') || !std::getline(iss, value_str))
		std::cout << "Error: invalid line format" << std::endl;

	date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    value_str.erase(0, value_str.find_first_not_of(" \t"));
    value_str.erase(value_str.find_last_not_of(" \t") + 1);

	return (is_valid_date(date) && is_valid_value(value_str));
}

static std::map<std::string, float> cpy_csv(std::ifstream &data)
{
	std::map<std::string, float> database;
	std::string line;
	std::getline(data, line); //check
	while (std::getline(data, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		if (!std::getline(iss, date, ',') || !(iss >> value))
			std::cout << "Error: bad data => " << line << std::endl;
		else
			database[date] = value;
	}
	return (database);
}

void BitcoinExchange::exchange()
{
	std::ifstream 	input_file(_filename.c_str());
	std::ifstream	data_file("data.csv");
	std::string 	line;
	float 			btc_price;
    
    if (!input_file.is_open() || !data_file.is_open())
		throw (std::runtime_error("Error: could to open input file"));

	_database = cpy_csv(data_file);

	while (getline(input_file, line)) 
	{
		if (line.empty())
			std::cout << "Error: empty line" << std::endl; //throw and catch in the while
		else if (parse_line(line))
		{
			btc_price = find_date_in_db_and_get_btc_price(_date ,_database);
			std::cout << btc_price * _value <<  std::endl; 
		}
	}
	input_file.close();
	data_file.close();
}
