/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:30:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/07 13:56:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <cfloat>
#include <sstream>
#include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		~ScalarConverter();
		ScalarConverter& operator=(ScalarConverter const &rhs);

		static void convert(std::string const &literal);
};

/*type.cpp*/

bool is_char(std::string const &literal);
bool is_int(std::string const &literal);
bool is_double(std::string const &literal);
bool is_float(std::string const &literal);
bool limit_type(std::string const &literal);

/*convert.cpp*/

void to_char(const char *lit_as_char, double lit_as_double);
void to_int(const char *lit_as_char, double lit_as_double);
void to_float(const char *lit_as_char, double lit_as_double);
void to_double(const char *lit_as_char, double lit_as_double);