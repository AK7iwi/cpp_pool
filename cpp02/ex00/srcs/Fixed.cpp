/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:29:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(): _fixed_point(0) { std::cout << "Default constructor called" << std::endl; }
	
Fixed::Fixed(const Fixed &cpy)
{ 
	std::cout << "Copy constructor called" << std::endl;
	_fixed_point = cpy._fixed_point;
	cpy.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{ 
		_fixed_point = rhs._fixed_point;
		rhs.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int		Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_fixed_point); 
}

void	Fixed::setRawBits( int const raw ) { _fixed_point = raw ; }