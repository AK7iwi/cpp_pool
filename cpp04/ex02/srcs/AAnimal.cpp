/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 16:15:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {std::cout << "Default constructor called for Animal" << std::endl;}

AAnimal::AAnimal(std::string const &type) : _type(type) {std::cout << "Type default constructor called for Animal" << std::endl;}

AAnimal::AAnimal(AAnimal const &cpy) : _type(cpy._type) {std::cout << "Copy constructor calledv for Animal" << std::endl;}

AAnimal::~AAnimal() {std::cout << "Destructor called for Animal" << std::endl;}

AAnimal&	AAnimal::operator=(AAnimal const &rhs) 
{	
    std::cout << "Copy assignment operator called for Animal" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void		AAnimal::makeSound() const {std::cout << "I'm an animal" << std::endl;}

std::string	AAnimal::getType() const {return (_type);}