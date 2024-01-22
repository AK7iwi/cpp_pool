/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:57:22 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/22 15:43:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
    public:
    
        DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap const &cpy);
        virtual ~DiamondTrap();
        DiamondTrap&	operator=(DiamondTrap const &rhs);

        void    whoAmI();

    private:
        std::string     _name;
};