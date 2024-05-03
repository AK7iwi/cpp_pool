/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:43 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:28:27 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <stdlib.h>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &cpy);
		~Fixed();
		Fixed& operator=(Fixed const &rhs);

		void	set_raw_bits(int const raw);
		int		get_raw_bits() const;
		
	private:
		int						_raw_bits;
		static uint8_t const 	_nb_fractional_bits;
};