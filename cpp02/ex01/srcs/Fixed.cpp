/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:18 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 22:06:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nb_fractional_bits = 8;

Fixed::Fixed() : _raw_bits(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(int const &number)
{ 
	std::cout << "Int constructor called" << std::endl;
	_raw_bits = number << _nb_fractional_bits;
}

Fixed::Fixed(float const &number)
{
	std::cout << "Float constructor called" << std::endl;
	_raw_bits = static_cast<int>(roundf(number * (1 << _nb_fractional_bits)));
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed&	Fixed::operator=(Fixed const &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		_raw_bits = rhs._raw_bits;
	return (*this);
}

int		Fixed::getRawBits(void) const {return (_raw_bits);}

void	Fixed::setRawBits(int const raw) {_raw_bits = raw;}

int		Fixed::toInt(void) const {return (_raw_bits >> _nb_fractional_bits);}

float	Fixed::toFloat(void) const {return (static_cast<float>(_raw_bits) / static_cast<float>(1 << _nb_fractional_bits));}

std::ostream&	operator<<(std::ostream &os, Fixed const &i)
{
	os << i.toFloat();
	return (os);
}