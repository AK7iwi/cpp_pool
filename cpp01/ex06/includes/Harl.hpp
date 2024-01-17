/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:46 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:00:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class Harl
{
	public:
		Harl();
		Harl(const Harl &cpy);
		~Harl();
		Harl &operator=(const Harl &rhs);
			
		void	_debug() const;
		void	_info() const;
		void	_warning() const;
		void	_error() const;
		
	private:
};