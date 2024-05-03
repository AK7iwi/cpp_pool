/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:44:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:23:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.set_type("some other type of club");
	bob.attack();
		
	Weapon club2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.set_weapon(club2);
	jim.attack();
	club2.set_type("some other type of club");
	jim.attack();
	
	return (EXIT_SUCCESS);
}