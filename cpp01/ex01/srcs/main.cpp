/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 12:41:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int horde_size = 5;
    std::string zombie_name = "Horde_Zombie";

    Zombie* zombie_array = zombieHorde(horde_size, zombie_name);

    for (int i = 0; i < horde_size; ++i)
        zombie_array[i].announce();
    delete[] zombie_array;
}