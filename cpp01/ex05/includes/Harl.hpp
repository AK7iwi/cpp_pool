/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:30:21 by mfeldman         ###   ########.fr       */
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
		Harl&	operator=(Harl const &rhs);
		
		void    complain(std::string level);
		
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
};
