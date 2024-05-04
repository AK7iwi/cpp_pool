/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:41 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:47:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	 _type(type) {}

Weapon::Weapon(Weapon const &cpy) {_type = cpy._type;}

Weapon::~Weapon() {}

Weapon&	Weapon::operator=(Weapon const &rhs)
{	
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const&	Weapon::get_type() const 
{return (_type);}

void				Weapon::set_type(std::string type) 
{_type = type;}


