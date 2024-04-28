/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/28 17:32:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::RPN(RPN const &cpy)
{
	
}

RPN::~RPN() 
{
	
}

RPN&	RPN::operator=(RPN const &rhs) 
{	
	if (this != &rhs)
	{
		
	}
	return (*this);
}


static void parse_operation(std::string const &operation)
{
	if (operation.empty())
		throw (std::invalid_argument("Error: string is empty"));

	for (int i = 0; operation[i]; i++)
	{
		if (!is_valid_char(operation[i]))
			throw (std::invalid_argument("Error: Invalid character"));
	}
}

void RPN::calcule(std::string const &operation)
{
	try
	{
		parse_operation(operation);
		//displya_result
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl;}
}