/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/17 21:50:49 by mfeldman         ###   ########.fr       */
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

void BitcoinExchange::parse_line(std::string &line)
{
	std::istringstream	iss(line);
	std::string	date, value_str;
	std::getline(iss, date, '|'); // check that it exist 
	std::getline(iss, value_str);
	// float value = std::stof(value_str);
	
	date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    value_str.erase(0, value_str.find_first_not_of(" \t"));
    value_str.erase(value_str.find_last_not_of(" \t") + 1);

	std::cout << date << std::endl;
	std::cout << value_str << std::endl;


	//check date
	//check |
	//check value
	//check int max/min, positiv number
	// _bitcoin_data[date] = value;
	
}

void BitcoinExchange::display_result()
{
	std::ifstream input_file(_filename.c_str());
	std::string line;
    
    if (!input_file.is_open()) 
		throw(std::invalid_argument("Error: Unable to open input file"));

	while(getline(input_file, line)) // skip the first line 
	{
		if (line.empty())
			throw(std::invalid_argument("Empty line"));
		// std::cout << line << std::endl;
		parse_line(line); 
		// find_date_in_db_and_get_value()
		// exchange_value();
		// display();
	}
	 input_file.close();
}
