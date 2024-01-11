/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/11 14:58:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() {}
	
Fixed::Fixed(const Fixed &cpy) { (void)cpy ;}

Fixed	&Fixed::operator=(const Fixed &rhs)
{	
	if (this != &rhs) {(void)rhs;}
	return (*this);
}

Fixed::~Fixed() {}