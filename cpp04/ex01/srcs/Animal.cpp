/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 14:40:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {std::cout << "Default constructor called for Animal" << std::endl;}

Animal::Animal(std::string const &type) : _type(type) {std::cout << "Type default constructor called for Animal" << std::endl;}

Animal::Animal(Animal const &cpy) : _type(cpy._type) {std::cout << "Copy constructor called for Animal" << std::endl;}

Animal::~Animal() {std::cout << "Destructor called for Animal" << std::endl;}

Animal&	Animal::operator=(Animal const &rhs) 
{	
    std::cout << "Copy assignment operator called for Animal" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void		Animal::make_sound() const {std::cout << "I'm an animal" << std::endl;}

std::string	Animal::get_type() const {return (_type);}