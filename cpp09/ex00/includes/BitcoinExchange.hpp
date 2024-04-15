/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:18:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 19:26:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange 
{
	public:
		BitcoinExchange(std::string const &filename);
        BitcoinExchange(BitcoinExchange const &cpy);
        ~BitcoinExchange();
		BitcoinExchange&	operator=(BitcoinExchange const &rhs);

		void	parse_line(); // private?
		void	display_result();
		
	private:
    	std::string _filename;
};

