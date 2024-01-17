/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:24 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 13:59:41 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie 
{
    public:
		Zombie();
		Zombie(const Zombie &cpy);
		~Zombie();
		Zombie	&operator=(const Zombie &rhs);

    	void	announce() const;
		void	set_name(std::string name);
		
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);
