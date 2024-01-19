/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:32 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 21:42:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::Zombie(Zombie const &cpy) {_name = cpy._name;}

Zombie::~Zombie() {std::cout << _name << " is destroyed" << std::endl;}

Zombie&	Zombie::operator=(Zombie const &rhs) 
{	
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

void	Zombie::announce() const {std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
