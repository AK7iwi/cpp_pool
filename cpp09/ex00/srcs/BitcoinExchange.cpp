/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 17:40:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy)
{}

BitcoinExchange::~BitcoinExchange() 
{}

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const &rhs) 
{	
	if (this != &rhs)
	return(*this);
}