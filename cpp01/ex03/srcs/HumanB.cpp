/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:00 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/11 09:10:45 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon_b(NULL) {}

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
		_weapon_b = rhs._weapon_b;
	}
	return (*this);
}

HumanB::~HumanB() {}

void	HumanB::attack() const 
{
	std::cout << _name 
			  << " attacks with their " 
			  << _weapon_b->getType()
			  << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {_weapon_b = &weapon;}