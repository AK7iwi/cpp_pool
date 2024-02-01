/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:54:28 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 15:41:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria("ice") {std::cout << "Type default constructor called for Ice" << std::endl;}

Ice::Ice(Ice const &cpy) : AMateria(cpy._type) {std::cout << "Copy constructor called for Ice" << std::endl;}

Ice::~Ice() {std::cout << "Destructor called for Ice" << std::endl;}

Ice&	Ice::operator=(Ice const &rhs) 
{	
    std::cout << "Copy assignment operator called for Ice" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}