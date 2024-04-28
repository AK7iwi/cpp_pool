/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/28 15:47:38 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string const &operation) :
	_operation(operation)
{
	
}

RPN::RPN(RPN const &cpy) : 
	_operation(cpy._operation)
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


void RPN::calcule()
{
	
}

