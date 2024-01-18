/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 00:00:03 by mfeldman         ###   ########.fr       */
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

		int		get_fixed_point(void) const;
		void	set_fixed_point(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		
	private:
		int					_fixed_point;
		static int const	_nb_fractional_bits;
};

std::ostream&	operator<<(std::ostream &os, Fixed const &i);
