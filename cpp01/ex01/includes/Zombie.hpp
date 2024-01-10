/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:24 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/10 12:29:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie 
{
    public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &cpy);
		Zombie	&operator=(const Zombie &rhs);
		virtual ~Zombie();

    	void	announce() const;
		
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);
void	set_name(std::string name);
