/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:28 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 14:21:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB 
{
    public:
		HumanB();
		HumanB(const HumanB &cpy);
		HumanB	&operator=(const HumanB &rhs);
		virtual ~HumanB();

		void	attack() const;

		
	private:
		std::string _name;
		Weapon _weapon_b;
		
};