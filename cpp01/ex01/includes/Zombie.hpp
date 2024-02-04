/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:24 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:51:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>

class Zombie 
{
    public:
		Zombie();
		Zombie(Zombie const &cpy);
		~Zombie();
		Zombie&	operator=(Zombie const &rhs);

    	void	announce() const;
		void	set_name(std::string name);
		
	private:
		std::string _name;
};

Zombie*	zombie_horde(int N, std::string name);
