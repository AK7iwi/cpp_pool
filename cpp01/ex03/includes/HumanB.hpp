/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:28 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:34:33 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
    public:
		HumanB(std::string name);
		HumanB(HumanB const &cpy);
		~HumanB();
		HumanB&	operator=(HumanB const &rhs);

		void	attack() const;
		void	set_weapon(Weapon &weapon);
		
	private:
		std::string	_name;
		Weapon		*_weapon_b;

};