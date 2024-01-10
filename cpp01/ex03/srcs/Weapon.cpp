/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:41 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 16:19:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon(const Weapon &cpy)
{
	_type = cpy._type;
}

Weapon	&Weapon::operator=(const Weapon &rhs)
{	
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

Weapon::~Weapon() {}

// const	std::string	Weapon::getType() const
// {
	
// }

void	Weapon::setType(std::string type) { _type = type; }


