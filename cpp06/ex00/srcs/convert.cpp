/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:44:33 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/07 13:50:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void to_char(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< lit_as_char[0] << std::endl;
	else if (lit_as_double < 0 || lit_as_double >= CHAR_MAX)
		std::cout	<< "Impossible" << std::endl; 
	else if (lit_as_double <= 32 && lit_as_double >= 0)
		std::cout	<< "Non displayable" << std::endl;
	else
		std::cout	<< static_cast<char>(lit_as_double) << std::endl;
}

void to_int(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< static_cast<int>(lit_as_char[0]) << std::endl;
	else if (lit_as_double < INT_MIN || lit_as_double > INT_MAX)
		std::cout	<< "Impossible" << std::endl;
	else 
		std::cout	<< static_cast<int>(lit_as_double) << std::endl;
}

void to_float(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< std::fixed 
					<< std::setprecision(1) 
					<< static_cast<float>(lit_as_char[0])
					<< "f"
					<< std::endl;
	else if (lit_as_double < -FLT_MAX || lit_as_double > FLT_MAX)
		std::cout	<< "Impossible" << std::endl;
	else 
		std::cout 	<< std::fixed 
					<< std::setprecision(1) 
					<< static_cast<float>(lit_as_double) 
					<< "f" 
					<< std::endl;
}

void to_double(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< std::fixed
					<< std::setprecision(1) 
					<< static_cast<double>(lit_as_char[0])
					<< std::endl;
	else if (lit_as_double < -DBL_MAX || lit_as_double > DBL_MAX)
		std::cout	<< "Impossible" << std::endl;
	else 
		std::cout	<< std::fixed
					<< std::setprecision(1) 
					<< lit_as_double;
}