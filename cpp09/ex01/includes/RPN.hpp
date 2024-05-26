/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 17:52:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <exception>
#include <stdlib.h>

class RPN 
{
	public:
		/* Constructors & operators */
		
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

//private inline method?

bool 		is_valid_char(char c);
bool		is_operator(char c);

#endif /* RPN_HPP */