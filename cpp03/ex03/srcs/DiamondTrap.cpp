/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:57:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/20 23:46:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) 
{
    std::cout << "Constructor called for DiamondTrap " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy) :  ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "Copy constructor called for DiamondTrap " << _name << std::endl;
    _name = cpy._name;
    _hit_points = cpy._hit_points;
    _energy_points = cpy._energy_points;
    _attack_damage = cpy._attack_damage;
}

DiamondTrap::~DiamondTrap() {std::cout << "Destructor called for DiamondTrap " << _name << std::endl;}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs)
{	
    std::cout << "Copy assignment operator called for DiamondTrap" << std::endl;
	if (this != &rhs)
    {
		_name = rhs._name;
        _hit_points = rhs._hit_points;
        _energy_points = rhs._energy_points;
        _attack_damage = rhs._attack_damage;
    }
	return (*this);
}

void DiamondTrap::whoAmI() {std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;}