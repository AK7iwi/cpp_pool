/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:46 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:53:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class Harl
{
	public:
		Harl();
		Harl(Harl const &cpy);
		~Harl();
		Harl& operator=(Harl const &rhs);
			
		void	_debug() const;
		void	_info() const;
		void	_warning() const;
		void	_error() const;
};