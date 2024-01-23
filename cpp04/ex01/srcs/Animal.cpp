/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 15:25:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {std::cout << "Default constructor called for Animal" << std::endl;}

Animal::Animal(std::string const &type) : _type(type) {std::cout << "Type default constructor called for Animal" << std::endl;}

Animal::Animal(Animal const &cpy) : _type(cpy._type) {std::cout << "Copy constructor calledv for Animal" << std::endl;}

Animal::~Animal() {std::cout << "Destructor called for Animal" << std::endl;}

Animal&	Animal::operator=(Animal const &rhs) 
{	
    std::cout << "Copy assignment operator called for Animal" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void		Animal::makeSound() const {std::cout << "I'm an animal" << std::endl;}

std::string	Animal::getType() const {return (_type);}