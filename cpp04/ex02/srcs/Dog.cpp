/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 16:16:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain()) {std::cout << "Default constructor called for Dog" << std::endl;}

Dog::Dog(Dog const &cpy) : AAnimal(cpy._type), _brain(new Brain(*cpy._brain)) {std::cout << "Copy constructor called for Dog" << std::endl;}

Dog::~Dog() 
{
	std::cout << "Destructor called for Dog" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(Dog const &rhs) 
{	
    std::cout << "Copy assignment operator called for Dog" << std::endl;
	if (this != &rhs)
	{
		 delete _brain;
  		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return (*this);
}

void Dog::makeSound() const {std::cout << "Waouf! Waouf!" << std::endl;}