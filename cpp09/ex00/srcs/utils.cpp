/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:36:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/25 14:44:27 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool is_leap(long const &year) 
{
  if (year % 400 == 0)
    return (true);
  else if (year % 100 == 0)
    return (false);
  else if(year % 4 == 0)
    return (true);
  else
    return (false);
}

bool is_digit(std::string const &digit)
{	
	for (uint8_t i = 0; i < digit.length(); i++)
    {
		if (!isdigit(digit[i]))
			return (false);
	}
	return (true);
}

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
	std::string d_cpy = literal;
	int len = std::strlen(literal.c_str());
	
	d_cpy[len - 1] = '\0';
	return (is_double(d_cpy) && literal[len - 1] == 'f' && isdigit(literal[len - 2]));
}