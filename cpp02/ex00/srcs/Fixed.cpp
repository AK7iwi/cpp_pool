/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 21:58:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0) {std::cout << "Default constructor called" << std::endl;}
	
Fixed::Fixed(Fixed const &cpy)
{ 
	std::cout << "Copy constructor called" << std::endl;
	_raw_bits = cpy._raw_bits;
	cpy.getRawBits();
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed&	Fixed::operator=(Fixed const &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{ 
		_raw_bits = rhs._raw_bits;
		rhs.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits(void) const 
{
	std::cout << "get_raw_bits member function called" << std::endl;
	return(_raw_bits); 
}

void	Fixed::setRawBits(int const raw) {_raw_bits = raw ;}
