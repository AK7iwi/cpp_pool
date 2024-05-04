/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:38 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:46:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : 
	_name(name), 
	_weapon_a(weapon) {}

HumanA::HumanA(HumanA const &cpy): _weapon_a(cpy._weapon_a) {_name = cpy._name;}

HumanA::~HumanA() {}

HumanA	&HumanA::operator=(HumanA const &rhs)
{	
	if (this != &rhs)
	{
		_name = rhs._name;
		_weapon_a = rhs._weapon_a;
	}
	return (*this);
}

void	HumanA::attack() const
{std::cout << _name << " attacks with their " << _weapon_a.get_type() << std::endl;}