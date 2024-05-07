/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/06 16:43:20 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <exception>
#include <stdlib.h>

class RPN 
{
	public:
		RPN();
        RPN(RPN const &cpy);
        ~RPN();
		RPN&	operator=(RPN const &rhs);

		void 	perform_operation(char sign);
		void 	parse_operation(std::string const &operation);
		void 	calcule(std::string const  &operation);
		
	private:
		std::stack<int>		_stack;
};

bool 		is_valid_char(char c);
bool		is_operator(char c);