/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 00:26:43 by mfeldman         ###   ########.fr       */
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

static char to_char(double lit_as_double)
{
	if (lit_as_double < 0 || lit_as_double >= CHAR_MAX)
		std::cout	<< "Impossible" << std::endl;
	else if (lit_as_double <= 32 && lit_as_double >= 0)
		std::cout	<< "Non displayable" << std::endl;
	return (static_cast<char>(lit_as_double));
}

static int to_int(double lit_as_double)
{
	if (lit_as_double < INT_MIN || lit_as_double > INT_MAX)
		
	return (static_cast<int>(lit_as_double));
}

static float to_float(double lit_as_double)
{
	if (lit_as_double < -FLT_MAX || lit_as_double > FLT_MAX)
	return (static_cast<float>(lit_as_double));
}

static double to_double(double lit_as_double)
{
	if (lit_as_double < -DBL_MAX || lit_as_double > DBL_MAX)
	
	return (static_cast<double>(lit_as_double));
}

static void display(std::string const &literal)
{
	const char *lit_as_char = literal.c_str();
	double lit_as_double = strtod(lit_as_char, NULL);
	
	std::cout	<< "Char: "
				<< to_char(lit_as_double)
				<< std::endl;

	std::cout	<< "Int: "
				<< to_int(lit_as_double)
				<< std::endl;

	std::cout	<< "Float: "
				<< to_float(lit_as_double)
				<< std::endl;

	std::cout	<< "Double: "
				<< to_double(lit_as_double)
				<< std::endl;
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

static void find_and_display_type(std::string const &literal)
{
	std::cout << "The original type is: ";
	if (is_char(literal))
		std::cout << "Char" << std::endl;
	else if (is_int(literal))
		std::cout << "Int" << std::endl;
	else if (is_float(literal))
		std::cout << "Float" << std::endl;
	else if (is_double(literal))
		std::cout << "Double" << std::endl;
	else
		std::cout << "Unknow (Wrong input)" << std::endl;
}

void ScalarConverter::convert(std::string const &literal)
{	
	find_and_display_type(literal);
	display(literal);
}
