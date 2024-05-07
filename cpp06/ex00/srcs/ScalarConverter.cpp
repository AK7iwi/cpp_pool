/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/07 13:47:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy) 
{*this = cpy;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs)
{return (*this);}

static void display(std::string const &literal)
{
	if (limit_type(literal))
		return ;
		
	const char *lit_as_char = literal.c_str();
	double lit_as_double = strtod(lit_as_char, NULL);
	
	std::cout << "Char: ";
	to_char(lit_as_char, lit_as_double);

	std::cout << "Int: ";
	to_int(lit_as_char, lit_as_double);

	std::cout << "Float: ";
	to_float(lit_as_char, lit_as_double);

	std::cout << "Double: ";
	to_double(lit_as_char, lit_as_double);
}

static bool find_and_display_type(std::string const &literal)
{
	std::cout << "The original type is: ";
	
	if (is_char(literal)) 
		return (std::cout << "Char" << std::endl, true);
	else if (is_int(literal))
		return (std::cout << "Int" << std::endl, true);
	else if (is_float(literal))
		return (std::cout << "Float" << std::endl, true);
	else if (is_double(literal))
		return (std::cout << "Double" << std::endl, true);
		
	return (false);
}

void ScalarConverter::convert(std::string const &literal)
{	
	if (!find_and_display_type(literal))
		throw (std::invalid_argument("Error: unknow(wrong input)"));
		
	display(literal);
	
	std::cout << std::endl;
}
