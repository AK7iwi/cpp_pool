/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 13:39:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <stdint.h>

class Fixed
{
	public:
		Fixed();
		Fixed(int const &number);
		Fixed(float const &number);
		Fixed(Fixed const &cpy);
		~Fixed();
		Fixed& operator=(Fixed const &rhs);

		int		get_raw_bits() const;
		void	set_raw_bits(int const raw);
		int		to_int() const;
		float	to_float() const;
		
	private:
		int						_raw_bits;
		static uint8_t const	_nb_fractional_bits;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &i);
