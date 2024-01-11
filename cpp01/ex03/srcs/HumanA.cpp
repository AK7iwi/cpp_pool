/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:38 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/11 09:10:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon_a(weapon) {}

HumanA::HumanA(const HumanA &cpy): _weapon_a(cpy._weapon_a)
{
	_name = cpy._name;
	// _weapon_a = cpy._weapon_a;
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

void	HumanA::attack() const 
{
	std::cout << _name 
	          << " attacks with their " 
			  << _weapon_a.getType()
			  << std::endl;
}