/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:24:27 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 13:08:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int const &integer);
		Fixed(float const &floater);
		Fixed(Fixed const &cpy);
		~Fixed();
		Fixed&	operator=(Fixed const &rhs);
        
        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs) const;
        bool    operator<=(Fixed const &rhs) const;
        bool    operator==(Fixed const &rhs) const;
        bool    operator!=(Fixed const &rhs) const;

        Fixed   operator+(Fixed const &rhs) const;
        Fixed   operator-(Fixed const &rhs) const;
        Fixed   operator*(Fixed const &rhs) const;
        Fixed   operator/(Fixed const &rhs) const;
        
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);

        static Fixed&  min(Fixed &a, Fixed &b);
        static Fixed   min(Fixed const &a, Fixed const &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static Fixed   max(Fixed const &a, Fixed const &b);

        int		get_raw_bits() const;
		void	set_raw_bits(int const raw);
		int		to_int() const;
		float	to_float() const;
    	
	private:
		int					_raw_bits;
		static int const	_nb_fractional_bits;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &i);