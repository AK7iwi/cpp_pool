/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/16 22:11:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <stdexcept>

class BitcoinExchange 
{
	public:
		BitcoinExchange(std::string const &filename);
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

		void	parse_line(std::string &line);
		void	display_result();
		
	private:
    	std::string _filename;
		std::map<std::string, float> _bitcoin_data;
};

