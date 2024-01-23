/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 08:00:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() 
{
    DiamondTrap diamondtrap("DiamondTrap");
    diamondtrap.attack("DiamondTrap2");
    diamondtrap.takeDamage(10);
	diamondtrap.beRepaired(10);
    diamondtrap.whoAmI();
	diamondtrap.guardGate();
	diamondtrap.highFivesGuys();

    return (0);
}