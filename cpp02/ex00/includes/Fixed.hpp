/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:43 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 00:00:03 by mfeldman         ###   ########.fr       */
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

		int		get_fixed_point(void) const;
		void	set_fixed_point(int const raw);
		
	private:
		int					_fixed_point;
		static const int	_nb_fractional_bits;
};