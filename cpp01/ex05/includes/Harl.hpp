/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:53:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/11 11:56:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
	public:
		Harl();
		Harl(const Harl &cpy);
		Harl &operator=(const Harl &rhs);
		virtual ~Harl();
		
		void    complain(std::string level);
		
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
};
