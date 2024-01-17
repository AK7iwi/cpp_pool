/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:32:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int &integer);
		Fixed(const float &floater);
		Fixed(const Fixed &cpy);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		
	private:
		int _fixed_point;
		static const int _nb_fractional_bits;
};

std::ostream& operator<<( std::ostream& os, Fixed const& i );
