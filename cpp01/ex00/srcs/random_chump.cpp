/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_chump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:31:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	random_chump(std::string name)
{
	Zombie zombie(name);
    zombie.announce();
}