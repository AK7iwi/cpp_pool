/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/05 10:00:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <stdint.h>
#include <cstdlib>
#include <cstring>

class BitcoinExchange 
{
	public:
		/* Constructors & operators */
	
		BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

		/* Exchange method */

		void	exchange(std::ifstream &filename);
		
	private:
		std::string 					_date;
		float							_value;
		std::map<std::string, float>	_database;

		/* Parse method */
		
		void	_is_valid_value(std::string const &value);
		void 	_is_valid_date(std::string const &date);
		void	_parse_line(std::string const &line);
};

/* type.cpp */

bool 	is_leap(long const year);
bool 	is_digit(std::string const &digit);
bool 	is_int(std::string const &literal);
bool 	is_double(std::string const &literal);
bool 	is_float(std::string const &literal);

#endif /* BITCOIN_EXCHANGE_HPP */

