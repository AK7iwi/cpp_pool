/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:28 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/19 21:42:31 by mfeldman         ###   ########.fr       */
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
		void	setWeapon(Weapon &weapon);
		
	private:
		std::string	_name;
		Weapon		*_weapon_b;

};