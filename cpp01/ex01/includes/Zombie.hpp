/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:54:24 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:32:56 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

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
