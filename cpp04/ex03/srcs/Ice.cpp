/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:54:28 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 12:21:20 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {std::cout << "Type default constructor called for Ice" << std::endl;}

Ice::Ice(Ice const &cpy) : AMateria(cpy._type) {std::cout << "Copy constructor called for Ice" << std::endl;}

Ice::~Ice() {std::cout << "Destructor called for Ice" << std::endl;}

Ice&	Ice::operator=(Ice const &rhs) 
{	
    std::cout << "Copy assignment operator called for Ice" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

Ice*	Ice::clone() const {return (new Ice());}

void 	Ice::use(ICharacter &target) {std::cout << "* shoots an ice bolt at " << target.get_name() << " *" << std::endl;}
