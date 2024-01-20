/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:25:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/20 19:33:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() 
{
	ClapTrap player1("Player1");
	ClapTrap player2("Player2");
	ClapTrap player3(player2);
	ClapTrap player4;
    
	player4 = player3;

	player1.attack("player2");
	player2.takeDamage(0);
	player2.beRepaired(10);
    player2.attack("Player3");
	player3.takeDamage(20);
	player4.attack("Player3");
	player3.beRepaired(200);
	player1.takeDamage(200);
	player4.attack("Willy");
	
	return (0);
}