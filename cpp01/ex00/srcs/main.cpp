/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:24 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:37:55 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie* heap_zombie = new_zombie("Bob");
	heap_zombie->announce();
	delete (heap_zombie);
	
	random_chump("Julie");

	return (0);
}