/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/20 21:14:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap claptrap("ClapTrap1");
    claptrap.attack("ClapTrap2");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("ClapTrap3");
    claptrap.takeDamage(15);
    claptrap.beRepaired(8);

    ScavTrap scavtrap("ScavTrap");
    scavtrap.attack("ClapTrap1");
    scavtrap.takeDamage(10);
    scavtrap.guardGate();
    claptrap.attack("ClapTrap3");
    claptrap.takeDamage(15);
    claptrap.beRepaired(8);

    return 0;
}