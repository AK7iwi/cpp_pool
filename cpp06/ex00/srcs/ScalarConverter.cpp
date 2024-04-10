/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/10 16:20:10 by mfeldman         ###   ########.fr       */
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

static char to_char()
{}

static int to_int()
{}

static float to_float()
{}

static double to_double()
{}

static void display()
{}

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

static bool is_double(std::string const &literal)
{
	uint8_t point = 0;
	int i = 0;

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
	return (point == 1 && isdigit(literal[i - 1]));
}

static bool is_float(std::string const &literal)
{
	std::string d_cpy = literal;
	int len = std::strlen(literal.c_str());

	d_cpy[len - 1] = '\0';
	
	if (!is_double(d_cpy))
		return (false);
	return (literal[len - 1] == 'f');
}

static uint8_t find_and_display_type(std::string const &literal)
{
	if (is_char(literal))
		return (1); // to_char
	else if (is_int(literal))
		return (2); //to_int
	else if (is_float(literal))
		return (3); //to_float
	else if (is_double(literal))
		return (4); //to_double
	else
		std::cout << "Wrong input" << std::endl;
	return (0);
}

void ScalarConverter::convert(std::string const &literal)
{
	uint8_t o_type = find_and_display_type(literal);
	
	for (uint8_t i = 1; i < 4; i++)
	{
		if (i != o_type)
		{
			
		}
	}
	
	//convert to the three other data types
		//to_other data
	
	// other type (inf,..)
	
	//display the result   
		// display at the end of convert fct 
}
