/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:50:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    uint8_t horde_size = 5;
    std::string zombie_name = "Horde_Zombie";

    Zombie* zombie_array = zombie_horde(horde_size, zombie_name);

    for (uint8_t i = 0; i < horde_size; ++i)
        zombie_array[i].announce();
    delete[] (zombie_array);

	return (0);
}