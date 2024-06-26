/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:56:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

uint8_t const Fixed::_nb_fractional_bits = 8;

Fixed::Fixed() : 
	_raw_bits(0) 
{std::cout << "Default constructor called" << std::endl;}
	
Fixed::Fixed(Fixed const &cpy)
{ 
	std::cout << "Copy constructor called" << std::endl;
	_raw_bits = cpy._raw_bits;
	cpy.get_raw_bits(); //??
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed&	Fixed::operator=(Fixed const &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{ 
		_raw_bits = rhs._raw_bits;
		rhs.get_raw_bits();
	}
	return (*this);
}

int		Fixed::get_raw_bits() const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits); 
}

void	Fixed::set_raw_bits(int const raw) 
{_raw_bits = raw;}
