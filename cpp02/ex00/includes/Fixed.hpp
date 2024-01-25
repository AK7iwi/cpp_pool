/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:43 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:37:58 by mfeldman         ###   ########.fr       */
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

		void	set_raw_bits(int const raw);
		int		get_raw_bits(void) const;
		
	private:
		int					_raw_bits;
		static const int	_nb_fractional_bits;
};