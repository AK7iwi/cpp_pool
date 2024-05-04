/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:55:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}
	
Harl::Harl(Harl const &cpy) {(void)cpy;}

Harl::~Harl() {}

Harl&	Harl::operator=(Harl const &rhs)
{	
	if (this != &rhs)
		(void)rhs;
	return (*this);
}

void Harl::debug() const 
{std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;}

void Harl::info() const
{std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;}

void Harl::warning() const 
{std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;}

void Harl::error() const 
{std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;}
