/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:18 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/12 14:27:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_store = 8;

Fixed::Fixed(): _fixed_point(0) 
{ 
	std::cout << "Default constructor called" << std::endl;
}
	
Fixed::Fixed(const Fixed &cpy)
{ 
	_fixed_point = cpy._fixed_point;
	std::cout << "Copy constructor called" << std::endl;
	cpy.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{	
	if (this != &rhs)
	{ 
		_fixed_point = rhs._fixed_point;
		std::cout << "Copy assignment operator called" << std::endl;
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

void	Fixed::setRawBits( int const raw ) { _fixed_point = raw ;}

int toInt( void ) const
{
	
}

float toFloat( void ) const
{
	
}