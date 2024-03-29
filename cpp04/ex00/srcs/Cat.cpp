/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:23 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/29 14:02:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : 
	Animal("Cat") 
{std::cout << "Default constructor called for Cat" << std::endl;}

Cat::Cat(Cat const &cpy) : 
	Animal(cpy._type) 
{std::cout << "Copy constructor called for Cat" << std::endl;}

Cat::~Cat() 
{std::cout << "Destructor called for Cat" << std::endl;}

Cat&	Cat::operator=(Cat const &rhs) 
{	
    std::cout << "Copy assignment operator called for Cat" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void	Cat::make_sound() const {std::cout << "Miaou! Miaou!" << std::endl;}