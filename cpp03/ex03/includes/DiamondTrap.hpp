/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:57:22 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 07:59:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
    public:
    
        DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap const &cpy);
        ~DiamondTrap();
        DiamondTrap&	operator=(DiamondTrap const &rhs);
		
		void    attack(const std::string& target);
        void    whoAmI();

    private:
        std::string     _name;
};