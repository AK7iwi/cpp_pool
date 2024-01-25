/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:11:50 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 10:11:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {std::cout << "Default constructor called for Wrong Cat" << std::endl;}

WrongCat::WrongCat(WrongCat const &cpy) : WrongAnimal(cpy._type) {std::cout << "Copy constructor called for Wrong Cat" << std::endl;}

WrongCat::~WrongCat() {std::cout << "Destructor called for Wrong Cat" << std::endl;}

WrongCat&	WrongCat::operator=(WrongCat const &rhs) 
{	
    std::cout << "Copy assignment operator called for Wrong Cat" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void WrongCat::make_sound() const {std::cout << "I'm a Wrong Cat!" << std::endl;}