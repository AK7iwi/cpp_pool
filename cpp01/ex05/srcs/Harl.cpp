/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:05 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 15:42:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
	
Harl::Harl(const Harl &cpy) { (void)cpy ;}

Harl::~Harl() {}

Harl	&Harl::operator=(const Harl &rhs)
{	
	if (this != &rhs) {(void)rhs;}
	return (*this);
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };
	
	void (Harl::*functions[4])(void) = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error };
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*functions[i])();
	}
}

void Harl::_debug() { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl; }

void Harl::_info() { std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }

void Harl::_warning() { std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }

void Harl::_error() { std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;}

