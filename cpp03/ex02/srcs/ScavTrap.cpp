/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:20:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:55:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) 
{
    std::cout << "Constructor called for ScavTrap " << _name << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy._name)
{
    std::cout << "Copy constructor called for ScavTrap " << _name << std::endl;
    _name = cpy._name;
    _hit_points = cpy._hit_points;
    _energy_points = cpy._energy_points;
    _attack_damage = cpy._attack_damage;
}

ScavTrap::~ScavTrap() {std::cout << "Destructor called for ScavTrap " << _name << std::endl;}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs) 
{	
    std::cout << "Copy assignment operator called for ScavTrap" << std::endl;
	if (this != &rhs)
    {
		_name = rhs._name;
        _hit_points = rhs._hit_points;
        _energy_points = rhs._energy_points;
        _attack_damage = rhs._attack_damage;
    }
	return (*this);
}

void    ScavTrap::attack(const std::string& target) 
{
    if (_hit_points != 0 && _energy_points != 0) 
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
        return;
    } 
    if (_hit_points == 0)
        std::cout << "ScavTrap " << _name << " has no hits points left and can't attack!" << std::endl;
    if (_energy_points == 0)
        std::cout << "ScavTrap " << _name << " has no energy points left and can't attack!" << std::endl;
}

void    ScavTrap::guard_gate() {std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode." << std::endl;}
