/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:41 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 14:25:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const Weapon &cpy)
{
	_first_name = cpy._first_name;
	_last_name = cpy._last_name;
	_nickname = cpy._nickname;
	_phone_number = cpy._phone_number;
	_darkest_secret = cpy._darkest_secret;
}

Weapon	&Weapon::operator=(const Weapon &rhs)
{	
	if (this != &rhs)
	{
		_first_name = rhs._first_name;
		_last_name = rhs._last_name;
		_nickname = rhs._nickname;
		_phone_number = rhs._phone_number;
		_darkest_secret = rhs._darkest_secret;
	}
	return (*this);
}

Weapon::~Weapon() {}