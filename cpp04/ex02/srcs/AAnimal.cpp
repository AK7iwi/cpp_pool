/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:15:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() 
{std::cout << "Default constructor called for AAnimal" << std::endl;}

AAnimal::AAnimal(std::string const &type) : 
	_type(type) 
{std::cout << "Type default constructor called for AAnimal" << std::endl;}

AAnimal::AAnimal(AAnimal const &cpy) : _type(cpy._type) 
{std::cout << "Copy constructor called for AAnimal" << std::endl;}

AAnimal::~AAnimal() 
{std::cout << "Destructor called for AAnimal" << std::endl;}

AAnimal&	AAnimal::operator=(AAnimal const &rhs) 
{	
    std::cout	<< "Copy assignment operator called for AAnimal"
				<< std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string	AAnimal::get_type() const
{return (_type);}