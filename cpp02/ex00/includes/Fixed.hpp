/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:43 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/20 21:11:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &cpy);
		~Fixed();
		Fixed&  operator=(Fixed const &rhs);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		
	private:
		int					_raw_bits;
		static const int	_nb_fractional_bits;
};