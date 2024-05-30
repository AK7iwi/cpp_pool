/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/30 15:11:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <exception>
#include <stdlib.h>
#include <stdint.h>
#include <sstream>

class RPN 
{
	public:
		/* Constructors & operators */
		
		RPN();
        RPN(RPN const &cpy);
        ~RPN();
		RPN&	operator=(RPN const &rhs);

		/* Calcul method */
		
		void	calcule(std::string const  &operation);
		
	private:
		std::stack<int>		_stack;
		
		/* Parse method */
		
		void	_parse_operation(std::string const &operation);
		
		/* Operation method */
		
		void 	_perform_operation(char const sign);
};


#endif /* RPN_HPP */