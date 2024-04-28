/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/28 16:28:10 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <stdint.h>
#include <cstdlib>
#include <cstring>
#include <iomanip>

class BitcoinExchange 
{
	public:
		BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

		void	is_valid_value(std::string const &value);
		void 	is_valid_date(std::string const &date);
		void	parse_line(std::string &line);
		void	exchange(std::ifstream &filename);
		
	private:
		std::string 					_date;
		float							_value;
		std::map<std::string, float>	_database;  
};

bool 	is_leap(long const &year);
bool 	is_digit(std::string const &digit);
bool 	is_int(std::string const &literal);
bool 	is_double(std::string const &literal);
bool 	is_float(std::string const &literal);

