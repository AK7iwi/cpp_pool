/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:18 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/18 11:56:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(): _fixed_point(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int &integer): _fixed_point(integer << _nb_fractional_bits) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(const float &floater): _fixed_point(static_cast<int>(roundf(floater * (1 << _nb_fractional_bits)))) { std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed(const Fixed &cpy)
{ 
	std::cout << "Copy constructor called" << std::endl;
	_fixed_point = cpy._fixed_point;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed	&Fixed::operator=(const Fixed &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs) { _fixed_point = rhs._fixed_point; }
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point); 
}

void	Fixed::setRawBits( int const raw ) { _fixed_point = raw ;}

int Fixed::toInt( void ) const { return (_fixed_point >> _nb_fractional_bits); }

float Fixed::toFloat( void ) const { return (static_cast<float>(_fixed_point) / (1 << _nb_fractional_bits)); }

std::ostream& operator<<( std::ostream& os, Fixed const& i )
{
	os << i.toFloat();
	return os;
}
