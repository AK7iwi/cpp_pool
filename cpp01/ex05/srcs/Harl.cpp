/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/11 11:56:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
	
Harl::Harl(const Harl &cpy)
{
	_filename = cpy._filename;
	_s1 = cpy._s1;
	_s2 = cpy._s2;
}

Harl	&Harl::operator=(const Harl &rhs)
{	
	if (this != &rhs)
	{
		_filename = rhs._filename;
		_s1 = rhs._s1;
		_s2 = rhs._s2;
	}
	return (*this);
}

Harl::~Harl() {}

void Harl::debug() { std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl; }

void Harl::info() { std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }

void Harl::warning() { std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }

void Harl::error() { std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;}

