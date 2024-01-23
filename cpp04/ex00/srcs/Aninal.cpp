/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aninal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 12:27:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal const &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
}

Animal::~Animal() {std::cout << "Destructor called" << std::endl;}

Animal&	Animal::operator=(Animal const &rhs) 
{	
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		return (*this);
}

void makeSound() const {std::cout << "Woof! Woof!" << std::endl;}