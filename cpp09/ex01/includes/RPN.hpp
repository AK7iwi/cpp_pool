/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/29 16:26:01 by mfeldman         ###   ########.fr       */
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

		void 	perform_operation(char sign);
		void 	parse_operation(std::string const &operation);
		void 	calcule(std::string const  &operation);
		
	private:
		std::stack<int>		_stack;
		// int					_result;
    	
};

bool 		is_valid_char(char c);
bool		is_operator(char c);