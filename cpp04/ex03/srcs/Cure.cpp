/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:55:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 15:42:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria("cure") {std::cout << "Type default constructor called for Cure" << std::endl;}

Cure::Cure(Cure const &cpy) :  AMateria(cpy._type) {std::cout << "Copy constructor called for Cure" << std::endl;}

Cure::~Cure() {std::cout << "Destructor called for Cure" << std::endl;}

Cure&	Cure::operator=(Cure const &rhs) 
{	
    std::cout << "Copy assignment operator called for Cure" << std::endl;
	if (this != &rhs)
		_type = rhs._type;  
	return (*this);
}