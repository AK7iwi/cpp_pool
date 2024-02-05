/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:55:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 12:29:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Type default constructor called for Character" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

Character::Character(Character const &cpy) : _name(cpy._name)
{
	std::cout << "Copy constructor called for Character" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
    {
        if (cpy._inventory[i] != NULL)
            _inventory[i] = cpy._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::~Character() 
{
	std::cout << "Destructor called for Character" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
        delete(_inventory[i]);
}

Character&	Character::operator=(Character const &rhs) 
{	
    std::cout << "Copy assignment operator called for Character" << std::endl;
	if (this != &rhs)
	{
        _name = rhs._name;

        for (uint8_t i = 0; i < 4; ++i)
            delete _inventory[i];
			
        for (uint8_t i = 0; i < 4; ++i)
        {
            if (rhs._inventory[i] != NULL)
                _inventory[i] = rhs._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
	return (*this);
}

std::string const&	Character::get_name() const {return (_name);}

void	Character::equip(AMateria *m)
{
    for (uint8_t i = 0; i < 4; ++i)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
			std::cout << "Materia added" << std::endl;
            return ;
        }
    }
	std::cout << "Materia can't be added" << std::endl;
}

void	Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
	{
    	_inventory[idx] = NULL;
		std::cout << "Materia dropped with success" << std::endl;
	}
	else
		std::cout << "Materia can't be dropped" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
        _inventory[idx]->use(target);
	else 
		std::cout << "Materia does not exist" << std::endl;
}