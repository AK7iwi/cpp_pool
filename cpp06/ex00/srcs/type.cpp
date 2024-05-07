/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:42:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/07 13:59:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool limit_type(std::string const &literal)
{
	if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff")
	{
		std::cout	<< "Char: Impossile" 
					<< std::endl
					<< "Int: Impossile" 
					<< std::endl
		 			<< "Float: +inff" 
					<< std::endl
					<< "Double: +inf" 
					<< std::endl
					<< std::endl;
					
		return (true);
	}
	else if (literal == "nan" || literal == "nanf")
	{
		std::cout	<< "Char: Impossile" 
					<< std::endl
					<< "Int: Impossile" 
					<< std::endl
					<< "Float: nanf" 
					<< std::endl
					<< "Double: nan" 
					<< std::endl
					<< std::endl;
					
		return (true);
	}
	
	return (false);
}

bool is_char(std::string const &literal)
{return (literal.size() == 1 && !isdigit(literal[0]));}

bool is_int(std::string const &literal)
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

bool is_double(std::string const &literal)
{
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
		
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

bool is_float(std::string const &literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (true);
		
	std::string d_cpy = literal;
	int len = std::strlen(literal.c_str());
	
	d_cpy[len - 1] = '\0';
	
	return (is_double(d_cpy) && literal[len - 1] == 'f' && isdigit(literal[len - 2])); //check this return
}