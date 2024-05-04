/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:55:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:17:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : 
	AMateria("cure")
{std::cout << "Type default constructor called for Cure" << std::endl;}

Cure::Cure(Cure const &cpy) :  AMateria(cpy._type) 
{std::cout << "Copy constructor called for Cure" << std::endl;}

Cure::~Cure() 
{std::cout << "Destructor called for Cure" << std::endl;}

Cure&	Cure::operator=(Cure const &rhs) 
{	
    std::cout << "Copy assignment operator called for Cure" << std::endl;
	if (this != &rhs)
		_type = rhs._type;  
	return (*this);
}

Cure*	Cure::clone() const 
{return (new Cure());}

void 	Cure::use(ICharacter &target) 
{std::cout << "* heals " << target.get_name() << "'s wounds *" << std::endl;}
