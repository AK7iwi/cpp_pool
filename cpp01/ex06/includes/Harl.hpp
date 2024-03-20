/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:46 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/20 15:31:47 by mfeldman         ###   ########.fr       */
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
			
		void	debug() const;
		void	info() const;
		void	warning() const;
		void	error() const;
};