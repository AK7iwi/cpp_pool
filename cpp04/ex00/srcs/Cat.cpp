/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:23 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 12:26:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
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