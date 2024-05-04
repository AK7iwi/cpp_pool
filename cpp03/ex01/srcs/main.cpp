/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:02:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ScavTrap scavtrap("ScavTrap");
    scavtrap.attack("ScavTrap1");
    scavtrap.take_damage(10);
    scavtrap.guard_gate();
    scavtrap.attack("ScavTrap2");
    scavtrap.take_damage(15);
    scavtrap.be_repaired(8);

    return (EXIT_SUCCESS);
}