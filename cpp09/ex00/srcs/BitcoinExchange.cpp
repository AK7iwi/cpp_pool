/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/25 14:58:07 by mfeldman         ###   ########.fr       */
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

static bool is_valid_date(std::string const &date)
{
	std::string day_str, month_str, year_str;
	long	day, month, year;
	bool 	error = 0;
	
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
	else if (day < 1)
		error |= 1;
	else if (!(month % 2) && day > 30 && month != 8) //august
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
	else if (day > 31)
		error |= 1;
	else if (month < 1 || month > 12)
		error |= 1;
	else if (year < 2009 || year > 2050)
		error |= 1;	
	if (error)
		return (std::cout << "Error: invalid date format" << std::endl, false);
	return (true);
}

static bool	is_valid_value(std::string const &value) 
{
	if (!is_int(value) && !is_double(value) && !is_float(value))
		return (std::cout << "Error: invalid number" << std::endl, false);

	float value_f;
	std::istringstream(value) >> value_f;
	
	if (value_f > 1000 || value_f < 0)
		return (std::cout << "Error: not a positive number or too large number" << std::endl, false);
	return (true);
}

static bool	parse_line(std::string &line)
{
	std::istringstream	iss(line);
	std::string	date, value_str;

	if (!std::getline(iss, date, '|') || !std::getline(iss, value_str))
		std::cout << "Error: invalid line format" << std::endl;

	date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    value_str.erase(0, value_str.find_first_not_of(" \t"));
    value_str.erase(value_str.find_last_not_of(" \t") + 1);

	return (is_valid_date(date) && is_valid_value(value_str));
}

static void cpy_csv(std::ifstream &data, std::map<std::string, double> database)
{
	std::string line;
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		if (!std::getline(iss, date, ',') || !(iss >> value))
			std::cout << "Error: bad input => " << line << std::endl;
		else
			database[date] = value;
	}
	data.close();
}

void BitcoinExchange::exchange()
{
	std::ifstream 	input_file(_filename.c_str());
	std::ifstream	data_file("data.csv");
	std::string line;
    
    if (!input_file.is_open() || !data_file.is_open())
		throw (std::runtime_error("Error: could to open input file"));

	cpy_csv(data_file, _database);
	//print database  to test 
	
	int i = 0;
	while (getline(input_file, line)) 
	{
		if (line.empty())
			std::cout << "Error: empty line" << std::endl;
		else if (parse_line(line))
		{
			std::cout << "Ligne" << i << ":" << "Yeaaaaaaaaaaaaaaaah" << std::endl;
			// find_date_in_db_and_get_value()
			// exchange_value(); 
			// display_result();
		}
		i++;
	}
	input_file.close();
}
