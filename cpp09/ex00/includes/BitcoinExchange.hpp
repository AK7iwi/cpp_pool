/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/25 15:36:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
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
		BitcoinExchange(std::string const &filename);
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

		void	exchange();
		
	private:
    	std::string 					_filename;
		std::map<std::string, double>	_database;
	
};

bool 	is_leap(long const &year);
bool 	is_digit(std::string const &digit);
bool 	is_int(std::string const &literal);
bool 	is_double(std::string const &literal);
bool 	is_float(std::string const &literal);

