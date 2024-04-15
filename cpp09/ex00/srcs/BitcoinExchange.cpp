/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:25:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 19:45:21 by mfeldman         ###   ########.fr       */
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

void BitcoinExchange::parse_line()
{

}


void BitcoinExchange::display_result()
{
	std::ifstream input_file(_filename.c_str()); //use std map`
    
    if (!input_file.is_open()) 
	{
        std::cout	<< "Error: Unable to open input file: "
					<< _filename 
					<< std::endl;
        return ; // throw exeception
    }

    std::stringstream buffer;
    buffer << input_file.rdbuf();
    std::string content = buffer.str();

	//boucle 
	parse_line(); //line_by_line
	find_in_db()
	display();	
}
