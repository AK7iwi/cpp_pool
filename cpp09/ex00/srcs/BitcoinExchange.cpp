/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/05 10:11:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Constructors & operators */

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy) : 
	_date(cpy._date),
	_value(cpy._value)
{
	_database.clear();
	_database.insert(cpy._database.begin(), cpy._database.end());
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) 
{	
	if (this != &rhs)
	{
		_date = rhs._date;
		_value = rhs._value;
		_database.clear();
		_database.insert(rhs._database.begin(), rhs._database.end());
	}
	
	return (*this);
}

/* Get price method */

static float get_btc_price(std::string const &date, std::map<std::string, float> &database)
{
	float price;
	std::map<std::string, float>::const_iterator it = database.find(date);
	std::map<std::string, float>::iterator previous_date;
	
	if (it == database.end())
	{
		previous_date = database.lower_bound(date);
    	if (previous_date == database.begin())
			throw (std::runtime_error("Error: Unknow date(Bitcoin wasn't born)"));
		previous_date--;
		price = previous_date->second;
	}
	else 
		price = it->second;
		
	return (price);
}

/* Parse methods */

void BitcoinExchange::_is_valid_date(std::string const &date)
{
	std::string day_str, month_str, year_str;
	long		day, month, year;
	
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    	throw (std::invalid_argument("Error: invalid format date"));
		
  	day_str = date.substr(8, 2);
  	month_str = date.substr(5, 2);
	year_str = date.substr(0, 4);
	
	day = strtol(day_str.c_str(), NULL, 10);
	month = strtol(month_str.c_str(), NULL, 10);
	year = strtol(year_str.c_str(), NULL, 10);

	if (!is_digit(day_str) || !is_digit(month_str) || !is_digit(year_str))
		throw (std::invalid_argument("Error: non digit character in date"));
	else if ((day < 1 || day > 31) 
			|| (month < 1 || month > 12) 
			|| (year < 2009 || year > 2024)) //actual year
		throw (std::invalid_argument("Error: invalid date"));
	else if (month == 2)
	{
		if (is_leap(year))
		{
			if (day > 29)
				throw (std::invalid_argument("Error: invalid date"));
		}
		else if (day > 28)
			throw (std::invalid_argument("Error: invalid date"));
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		throw (std::invalid_argument("Error: invalid date"));
		
	_date = date;
}

void	BitcoinExchange::_is_valid_value(std::string const &value) 
{
	if (!is_int(value) && !is_double(value) && !is_float(value)) 
		throw (std::invalid_argument("Error: invalid value"));

	float value_f;
	std::istringstream(value) >> value_f;
	
	if (value_f > 1000)
		throw (std::out_of_range("Error: too large a number"));
	else if (value_f < 0)
		throw (std::out_of_range("Error: negative number"));
		
	_value = value_f;
}

void	BitcoinExchange::_parse_line(std::string const &line)
{
	std::istringstream	iss(line);
	std::string			date, value_str;

	if (!std::getline(iss, date, '|') || !std::getline(iss, value_str))
		throw (std::runtime_error("Error: invalid line format"));

	date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    value_str.erase(0, value_str.find_first_not_of(" \t"));
    value_str.erase(value_str.find_last_not_of(" \t") + 1);

	_is_valid_date(date);
	_is_valid_value(value_str);
}

/* Copy CSV file method */

static std::map<std::string, float> cpy_csv(std::ifstream &data)
{
	std::map<std::string, float> database;
	std::string line;
	
	std::getline(data, line);
	while (std::getline(data, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		
		if (!std::getline(iss, date, ',') || !(iss >> value))
			throw (std::runtime_error("Error: bad data => "));
		else
			database[date] = value;
	}
	
	return (database);
}

/* Exchange method */

void BitcoinExchange::exchange(std::ifstream &input_file)
{
	std::ifstream 	data_file("data.csv");
	std::string 	line;
	float 			btc_price;
    
	try
	{
    	if (!input_file.is_open() || !data_file.is_open())
			throw (std::invalid_argument("Error: could to open input file"));
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	_database = cpy_csv(data_file);
	data_file.close();

	std::getline(input_file, line);
	while (getline(input_file, line)) 
	{
		try
		{
			if (line.empty())
				throw (std::runtime_error("Error: empty line"));
			else
			{
				_parse_line(line);
				btc_price = get_btc_price(_date ,_database);
				std::cout	<< _date 
							<< " => " 
							<< _value 
							<< " = " 
							<< btc_price * _value 
							<< std::endl; 
			}
		}
		catch (std::exception const &e)
		{std::cerr << e.what() << std::endl;}
	}
	
	input_file.close();
}