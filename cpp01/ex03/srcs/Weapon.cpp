/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:41 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 21:42:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon(Weapon const &cpy) {_type = cpy._type;}

Weapon::~Weapon() {}

Weapon&	Weapon::operator=(Weapon const &rhs)
{	
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const&	Weapon::getType() const {return(_type);}

void				Weapon::setType(std::string type) {_type = type;}


