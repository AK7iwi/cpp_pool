/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:26:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:36:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) 
{
    std::cout << "Constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) 
{
    std::cout << "Copy constructor called for ClapTrap " << _name << std::endl;
    _name = cpy._name;
    _hit_points = cpy._hit_points;
    _energy_points = cpy._energy_points;
    _attack_damage = cpy._attack_damage;
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called for ClapTrap " << _name << std::endl;}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs) 
{	
    std::cout << "Copy assignment operator called for ClapTrap" << std::endl;
	if (this != &rhs)
    {
		_name = rhs._name;
        _hit_points = rhs._hit_points;
        _energy_points = rhs._energy_points;
        _attack_damage = rhs._attack_damage;
    }
	return (*this);
}

void    ClapTrap::attack(const std::string& target) 
{
    if (_hit_points != 0 && _energy_points != 0) 
    { 
        std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points--;
        return ;
    } 
    if (_hit_points == 0)
        std::cout << "ClapTrap " << _name << " has no hits points left and can't attack!" << std::endl;
    if (_energy_points == 0)
        std::cout << "ClapTrap " << _name << " has no energy points left and can't attack!" << std::endl;
}

void    ClapTrap::take_damage(unsigned int amount) 
{
    if (_hit_points > 0) 
    {
        _hit_points = (amount >= _hit_points) ? 0 : _hit_points - amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage. Remaining Hit Points: " << _hit_points << std::endl;
    } 
    else
        std::cout << "ClapTrap " << _name << " has no hit points left and can't take any more damage!" << std::endl;
}

void    ClapTrap::be_repaired(unsigned int amount) 
{
    if (_hit_points != 0 && _energy_points != 0) 
    {
        _hit_points += amount;
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points. Remaining Hit Points: " << _hit_points << std::endl;
        _energy_points--;
        return ;
    } 
    if (_hit_points == 0)
        std::cout << "ClapTrap " << _name << " has no hits points left and can't be repaired" << std::endl;
    if (_energy_points == 0)
        std::cout << "ClapTrap " << _name << " has no energy points left and can't be repaired!" << std::endl;
}