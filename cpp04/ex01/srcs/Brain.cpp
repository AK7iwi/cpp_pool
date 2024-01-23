/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:59 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 15:20:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {std::cout << "Default constructor called for Brain" << std::endl;}

Brain::Brain(std::string const &type) : _type(type) {std::cout << "Type default constructor called for Brain" << std::endl;}

Brain::Brain(Brain const &cpy) : _type(cpy._type) 
{
	std::cout << "Copy constructor calledv for Animal" << std::endl;
}

Brain::~Brain() {std::cout << "Destructor called for Animal" << std::endl;}

Animal&	Animal::operator=(Animal const &rhs) 
{	
    std::cout << "Copy assignment operator called for Animal" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}