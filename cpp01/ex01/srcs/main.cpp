/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 09:27:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int hordeSize = 5;
    std::string zombieName = "HordeZombie";

    Zombie* zombieArray = zombieHorde(hordeSize, zombieName);

    for (int i = 0; i < hordeSize; ++i) {
        zombieArray[i].announce();
    }
    delete[] zombieArray;
}