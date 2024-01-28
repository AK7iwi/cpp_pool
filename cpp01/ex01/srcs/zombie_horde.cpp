/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:22 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:33:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombie_horde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
        horde[i].set_name(name);
    return (horde);
}