/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 07:07:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    FragTrap fragtrap("FragTrap");
    fragtrap.attack("FragTrap1");
    fragtrap.takeDamage(10);
    fragtrap.highFivesGuys();
    fragtrap.attack("FragTrap3");
    fragtrap.takeDamage(15);
    fragtrap.beRepaired(8);

    return (0);
}