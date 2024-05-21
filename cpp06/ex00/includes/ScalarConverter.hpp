/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:30:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 16:52:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <cfloat>

class ScalarConverter
{
	public:
		/* Constructors & operators */
		
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const &rhs);

		/* Convert method */
		
		static void convert(std::string const &literal);
};

/* type.cpp */

bool	is_char(std::string const &literal);
bool 	is_int(std::string const &literal);
bool 	is_double(std::string const &literal);
bool 	is_float(std::string const &literal);
bool 	limit_type(std::string const &literal);

/* convert.cpp */

void 	to_char(char const *lit_as_char, double const lit_as_double);
void 	to_int(char const *lit_as_char, double const lit_as_double);
void 	to_float(char const *lit_as_char, double const lit_as_double);
void 	to_double(char const *lit_as_char, double const lit_as_double);

#endif /* SCALAR_CONVERTER_HPP */