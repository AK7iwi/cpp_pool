/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 14:03:14 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {std::cout << "Default constructor called for Dog" << std::endl;}

Dog::Dog(Dog const &cpy) : Animal(cpy._type) {std::cout << "Copy constructor called for Dog" << std::endl;}

Dog::~Dog() {std::cout << "Destructor called for Dog" << std::endl;}

Dog&	Dog::operator=(Dog const &rhs) 
{	
    std::cout << "Copy assignment operator called for Dog" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void Dog::makeSound() const {std::cout << "Waouf! Waouf!" << std::endl;}