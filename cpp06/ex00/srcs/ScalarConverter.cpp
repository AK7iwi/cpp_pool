/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/06 06:06:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy) 
{(void)cpy;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &cpy)
{
	(void)cpy;
	return (*this);
}


void ScalarConverter::convert(std::string const &literal)
{
	//find type
		//is_data
	
	//convert from string to actual type
		//to_data
		
	//convert to the three other data types
		//to_other data
		
	//display the result   
		// display 
}
