/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 00:00:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nb_fractional_bits = 8;

Fixed::Fixed(): _fixed_point(0) {std::cout << "Default constructor called" << std::endl;}
	
Fixed::Fixed(Fixed const &cpy)
{ 
	std::cout << "Copy constructor called" << std::endl;
	_fixed_point = cpy._fixed_point;
	cpy.get_fixed_point();
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed&	Fixed::operator=(Fixed const &rhs)
{	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{ 
		_fixed_point = rhs._fixed_point;
		rhs.get_fixed_point();
	}
	return (*this);
}

int		Fixed::get_fixed_point(void) const 
{
	std::cout << "get_fixed_point member function called" << std::endl;
	return(_fixed_point); 
}

void	Fixed::set_fixed_point(int const raw) {_fixed_point = raw ;}
