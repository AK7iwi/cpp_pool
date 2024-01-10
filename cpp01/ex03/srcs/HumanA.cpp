/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:38 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 14:26:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(const HumanA &cpy)
{
	_first_name = cpy._first_name;
	
}

HumanA	&HumanA::operator=(const HumanA &rhs)
{	
	if (this != &rhs)
	{
		_first_name = rhs._first_name;
	}
	return (*this);
}

HumanA::~HumanA() {}