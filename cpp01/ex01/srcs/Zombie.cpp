/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 15:41:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(const Zombie &cpy) {_name = cpy._name;}

Zombie::~Zombie() { std::cout << _name << " is destroyed" << std::endl; }

Zombie	&Zombie::operator=(const Zombie &rhs) 
{	
	if (this != &rhs) { _name = rhs._name;}
	return (*this);
}

void	Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {_name = name;} 
	
	