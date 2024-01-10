/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:00 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 14:39:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(const HumanB &cpy) 
{
	_name = cpy._name;
	_weapon_b = cpy._weapon_b;
}

HumanB	&HumanB::operator=(const HumanB &rhs)
{	
	if (this != &rhs)
	{
		_name = rhs._name;
		_weapon_a = rhs._weapon_a;
	}
	return (*this);
}

HumanB::~HumanB() {}