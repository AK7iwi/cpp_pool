/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:15:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/22 15:50:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) 
{
    std::cout << "Constructor called for FragTrap " << _name << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy._name)
{
    std::cout << "Copy constructor called for FragTrap " << _name << std::endl;
    _name = cpy._name;
    _hit_points = cpy._hit_points;
    _energy_points = cpy._energy_points;
    _attack_damage = cpy._attack_damage;
}

FragTrap::~FragTrap() {std::cout << "Destructor called for FragTrap " << _name << std::endl;}

FragTrap&	FragTrap::operator=(FragTrap const &rhs) 
{	
    std::cout << "Copy assignment operator called for FragTrap" << std::endl;
	if (this != &rhs)
    {
		_name = rhs._name;
        _hit_points = rhs._hit_points;
        _energy_points = rhs._energy_points;
        _attack_damage = rhs._attack_damage;
    }
	return (*this);
}

void FragTrap::highFivesGuys() {std::cout << "FragTrap " << _name << " requests a high five" << std::endl;}