/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/24 12:33:32 by mfeldman         ###   ########.fr       */
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
	return(*this);
}

static bool is_leap(long const &year) 
{
  if (year % 400 == 0)
    return (true);
  else if (year % 100 == 0)
    return (false);
  else if(year % 4 == 0)
    return (true);
  else
    return (false);
}

static bool is_valid_date(std::string const &date)
{
	std::string day_str, month_str, year_str;
	long	day, month, year;
	bool error = 0;
	
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    	return (false);
		
  	day_str = date.substr(8, 2);
  	month_str = date.substr(5, 2);
	year_str = date.substr(0, 4);
	
	day = strtol(day_str.c_str(), NULL, 10);
	month = strtol(month_str.c_str(), NULL, 10);
	year = strtol(year_str.c_str(), NULL, 10);

	//is_digit()	
	if (day < 1)
		return (false);
	
	if (!(month % 2) && day > 30 && month != 8) //august
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
	double value_f;

	//is_digit()
	
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

void BitcoinExchange::exchange()
{
	std::ifstream input_file(_filename.c_str());
	std::string line;
    
    if (!input_file.is_open()) 
		throw (std::invalid_argument("Error: could to open input file"));
 
	//cpy_csv
	// _bitcoin_data[date] = atof(value_str.c_str()); 

	int i = 0;
	while (getline(input_file, line)) // skip the first line, get_line one time before the while
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
