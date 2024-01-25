/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 10:01:12 by mfeldman         ###   ########.fr       */
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
    diamondtrap.take_damage(10);
	diamondtrap.be_repaired(10);
    diamondtrap.who_am_I();
	diamondtrap.guard_gate();
	diamondtrap.high_fives_guys();

    return (0);
}