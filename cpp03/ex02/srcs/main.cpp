/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:19:58 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:03:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    FragTrap fragtrap("FragTrap");
    fragtrap.attack("FragTrap1");
    fragtrap.take_damage(10);
    fragtrap.high_fives_guys();
    fragtrap.attack("FragTrap3");
    fragtrap.take_damage(15);
    fragtrap.be_repaired(8);

    return (EXIT_SUCCESS);
}