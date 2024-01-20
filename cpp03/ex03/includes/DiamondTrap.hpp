/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamond.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:57:22 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/20 22:17:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap 
{
    public:
    
        DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap const &cpy);
        ~DiamondTrap();
        DiamondTrap&	operator=(DiamondTrap const &rhs);

        void    whoAmI();

    private:
        std::string     _name;
        

    
};