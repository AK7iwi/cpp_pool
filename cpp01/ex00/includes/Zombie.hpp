/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:22:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>

class Zombie 
{
    public:
		Zombie(std::string name);
		Zombie(Zombie const &cpy);
		~Zombie();
		Zombie&	operator=(Zombie const &rhs);

    	void	announce() const;
		
	private:
		std::string	_name;
};

Zombie*	new_zombie(std::string name);
void	random_chump(std::string name);