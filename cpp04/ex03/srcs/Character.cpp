/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:55:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 18:37:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {std::cout << "Type default constructor called for Character" << std::endl;}

Character::Character(Character const &cpy) {std::cout << "Copy constructor called for Character" << std::endl;}

Character::~Character() {std::cout << "Destructor called for Character" << std::endl;}

Character&	Character::operator=(Character const &rhs) 
{	
    std::cout << "Copy assignment operator called for Character" << std::endl;
	if (this != &rhs) 
		return (*this);
}