/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/27 19:51:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string const &i_p_m_e) :
	_i_p_m_e(i_p_m_e)
{
	
}

RPN::RPN(RPN const &cpy) : 
	_i_p_m_e(cpy._i_p_m_e)
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

