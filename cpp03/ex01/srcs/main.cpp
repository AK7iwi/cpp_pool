/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 07:01:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ScavTrap scavtrap("ScavTrap");
    scavtrap.attack("ScavTrap1");
    scavtrap.takeDamage(10);
    scavtrap.guardGate();
    scavtrap.attack("ScavTrap2");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(8);

    return (0);
}