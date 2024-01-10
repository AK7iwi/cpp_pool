/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:38 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 14:39:10 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(const HumanA &cpy) 
{
	_name = cpy._name;
	_weapon_a = cpy._weapon_a;
	
}

HumanA	&HumanA::operator=(const HumanA &rhs)
{	
	if (this != &rhs)
	{
		_name = rhs._name;
		_weapon_a = rhs._weapon_a;
	}
	return (*this);
}

HumanA::~HumanA() {}