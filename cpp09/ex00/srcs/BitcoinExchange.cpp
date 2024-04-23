/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/23 17:59:07 by mfeldman         ###   ########.fr       */
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

bool is_valid_date(std::string const &date)
{
	std::string day_str, month_str, year_str;
	long	day, month, year;
	
	if( date.length() != 10 || date[4] != '-' || date[7] != '-' )
    	return (false);
		
  	day_str = date.substr(8, 2);
  	month_str = date.substr(5, 2);
	year_str = date.substr(0, 4);
	
	//is_digit_value
	
	day = std::strtol(day_str.c_str(), );
	month = std::strtol(month_str.c_str(), );
	year = std::strtol(year_str.c_str(), );
}

bool	is_valid_value(std::string const &value) 
{
	double value_f;

	//is_digit_value
	
	std::istringstream(value) >> value_f;
	
	if (value_f > 1000 || value_f < 0)
		return (std::cout << "Error: not a positive number or too large number" << std::endl, false);
	return (true);

}

bool	BitcoinExchange::parse_line(std::string &line)
{
	std::istringstream	iss(line);
	std::string	date, value_str;

	if (!std::getline(iss, date, '|') || !std::getline(iss, value_str))
		std::cout << "Error: invalid format line" << std::endl;

	date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    value_str.erase(0, value_str.find_first_not_of(" \t"));
    value_str.erase(value_str.find_last_not_of(" \t") + 1);

	return (is_valid_value(value_str) && is_valid_date(date));
	// std::cout << date << std::endl;
	// std::cout << value_str << std::endl;
}

void BitcoinExchange::exchange()
{
	std::ifstream input_file(_filename.c_str());
	std::string line;
    
    if (!input_file.is_open()) 
		throw (std::invalid_argument("Error: could to open input file"));
 
	//cpy_csv
	// _bitcoin_data[date] = atof(value_str.c_str()); 

	while(getline(input_file, line)) // skip the first line, get_line one time before the while
	{
		if (line.empty())
			std::cout << "Error: empty line" << std::endl;
		else if (parse_line(line))
		{
			// find_date_in_db_and_get_value()
			// exchange_value(); 
			// display_result();
		}
	}
	input_file.close();
}
