/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/28 17:28:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <exception>

class RPN 
{
	public:
		RPN();
        RPN(RPN const &cpy);
        ~RPN();
		RPN&	operator=(RPN const &rhs);

		void RPN::calcule(std::string const  &operation);
		
	private:
		std::stack<int>		_stack;
    	
};

bool inline	is_valid_char(char c);