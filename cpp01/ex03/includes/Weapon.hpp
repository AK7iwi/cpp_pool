/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:44:26 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:24:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>

class Weapon 
{
    public:
		Weapon(std::string type);
		Weapon(Weapon const &cpy);
		~Weapon();
		Weapon&	operator=(Weapon const &rhs);
		
		std::string const&	get_type() const;
		void				set_type(std::string type);

	private:
		std::string	_type;
};
