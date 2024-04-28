/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/28 15:46:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class RPN 
{
	public:
		RPN(std::string const &operation);
        RPN(RPN const &cpy);
        ~RPN();
		RPN&	operator=(RPN const &rhs);

		void RPN::calcule();
		
	private:
		std::string const _operation;
    	
};