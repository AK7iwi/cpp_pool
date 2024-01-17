/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 13:59:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA 
{
    public:
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA &cpy);
		~HumanA();
		HumanA	&operator=(const HumanA &rhs);

		void	attack() const;
		
	private:
		std::string _name;
		Weapon &_weapon_a;
};