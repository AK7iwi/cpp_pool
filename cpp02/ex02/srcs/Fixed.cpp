/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:24:42 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:58:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

uint8_t const Fixed::_nb_fractional_bits = 8;

Fixed::Fixed() : 
	_raw_bits(0) 
{std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(int const &integer)
{ 
	std::cout << "Int constructor called" << std::endl;
	_raw_bits = integer << _nb_fractional_bits;
}

Fixed::Fixed(float const &floater)
{
	std::cout << "Float constructor called" << std::endl;
	_raw_bits = static_cast<int>(roundf(floater * (1 << _nb_fractional_bits)));
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

bool Fixed::operator>(Fixed const &rhs) const {return (_raw_bits > rhs._raw_bits);}
bool Fixed::operator<(Fixed const &rhs) const {return (_raw_bits < rhs._raw_bits);}
bool Fixed::operator>=(Fixed const &rhs) const {return (_raw_bits >= rhs._raw_bits);}
bool Fixed::operator<=(Fixed const &rhs) const {return (_raw_bits <= rhs._raw_bits);}
bool Fixed::operator==(Fixed const &rhs) const {return (_raw_bits == rhs._raw_bits);}
bool Fixed::operator!=(Fixed const &rhs ) const {return (_raw_bits != rhs._raw_bits);}

Fixed	Fixed::operator+(Fixed const &rhs) const {return (to_float() + rhs.to_float());}
Fixed	Fixed::operator-(Fixed const &rhs) const {return (to_float() - rhs.to_float());}
Fixed	Fixed::operator*(Fixed const &rhs) const {return (to_float() * rhs.to_float());}
Fixed	Fixed::operator/(Fixed const &rhs) const {return (to_float() / rhs.to_float());}

Fixed &Fixed::operator++()
{
    _raw_bits += 1;
    return (*this);
}

Fixed &Fixed::operator--()
{
    _raw_bits -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    _raw_bits += 1;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    _raw_bits -= 1;
    return (tmp);
}

Fixed&  Fixed::min(Fixed &a, Fixed &b) {return (a < b) ? a : b;}
Fixed   Fixed::min(Fixed const &a, Fixed const &b) {return (a < b) ? a : b;}
Fixed&  Fixed::max(Fixed &a, Fixed &b) {return (a > b) ? a : b;}
Fixed   Fixed::max(Fixed const &a, Fixed const &b) {return (a > b) ? a : b;}

int		Fixed::get_raw_bits() const {return (_raw_bits);}
void	Fixed::set_raw_bits(int const raw) {_raw_bits = raw;}
int		Fixed::to_int() const {return (_raw_bits >> _nb_fractional_bits);}
float	Fixed::to_float() const {return (static_cast<float>(_raw_bits) / static_cast<float>(1 << _nb_fractional_bits));}

std::ostream&	operator<<(std::ostream &os, Fixed const &i)
{
	os << i.to_float();
	return (os);
}