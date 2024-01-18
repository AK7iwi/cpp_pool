/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/18 12:40:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie 
{
    public:
		Zombie(std::string name);
		Zombie(Zombie const &cpy);
		~Zombie();
		Zombie	&operator=(Zombie const &rhs);

    	void	announce() const;
		
	private:
		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);