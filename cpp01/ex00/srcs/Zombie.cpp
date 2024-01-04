/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:32 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/04 19:22:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

Zombie::Zombie(const Zombie &cpy) {_name = cpy._name;}

Zombie	&Zombie::operator=(const Zombie &rhs) 
{	
	if (this != &rhs) { _name = rhs._name;}
	return (*this);
}

Zombie::~Zombie() { std::cout << _name << " is destroyed" << std::endl;}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


