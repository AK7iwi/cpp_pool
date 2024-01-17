/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:00:21 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
	public:
		Harl();
		Harl(const Harl &cpy);
		~Harl();
		Harl &operator=(const Harl &rhs);
		
		void    complain(std::string level);
		
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
};
