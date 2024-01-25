/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:25:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:53:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() 
{
	ClapTrap player1("Player1");
	ClapTrap player2("Player2");

	player1.attack("player2");
	player2.take_damage(2);
    player2.attack("Player1");
	player2.be_repaired(5);
	player1.take_damage(200);
	
	return (0);
}