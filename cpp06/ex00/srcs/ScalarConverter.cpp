/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/07 18:17:56 by mfeldman         ###   ########.fr       */
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
	uint8_t type = find_and_display_type(literal);
	
	//convert from string to actual type
		//to_data
		
	//convert to the three other data types
		//to_other data
	
	// other type 
	
	//display the result   
		// display 
}


static uint8_t find_and_display_type(std::string const &literal)
{
	if (is_char(literal))
		return (1);
	else if (is_int(literal))
		return (2);
	else if (is_float(literal))
		return (3);
	else if (is_double(literal))
		return (4);
}
	

static bool is_char(std::string const &literal)
{return (literal.size() == 1 && !isdigit(literal[0]));}

static bool is_int(std::string const &literal)
{
	int i = 0;

	if (literal[0] == '-' || literal[0] == '+')
		i++;
	
	while (literal[i]) 
	{
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool is_float(std::string const &literal)
{
	int len = std::strlen(literal.c_str());

	std::string d_cpy;

	std::strncpy(d_cpy)

	if (!is_double(d_cpy))
		return (false);
	return (literal[len - 1] == 'f');
	
}

static bool is_double(std::string const &literal)
{
	int i = 0;
	uint8_t point = 0;

	if (literal[0] == '-' || literal[0] == '+')
		i++;

	while (literal[i])
	{
		if (!isdigit(literal[i]))
		{
			if (literal[i] == '.')
				point++;
			else 
				return (false);
		}
		i++;
	}
	return (point == 1);
	
}

static void to_char()
{}

static void to_int()
{}

static void to_double()
{}

static void to_char()
{}

static void display()
{
	
}