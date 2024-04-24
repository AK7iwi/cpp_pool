/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/24 11:27:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <cstdlib>

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
		std::map<std::string, double>	_bitcoin_data;
};

