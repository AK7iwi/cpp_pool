/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:11:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:11:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{std::cout << "Default constructor called for Wrong Animal" << std::endl;}

WrongAnimal::WrongAnimal(std::string const &type) : 
	_type(type)
{std::cout << "Type default constructor called for Animal" << std::endl;}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy) : _type(cpy._type) 
{std::cout << "Copy constructor called for Wrong Animal" << std::endl;}

WrongAnimal::~WrongAnimal()
{std::cout << "Destructor called for Wrong Animal" << std::endl;}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &rhs) 
{	
    std::cout << "Copy assignment operator called for Wrong Animal" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void		WrongAnimal::make_sound() const
{std::cout << "I'm a Wrong Animal" << std::endl;}

std::string	WrongAnimal::get_type() const
{return (_type);}