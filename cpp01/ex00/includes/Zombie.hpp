/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 01:21:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 16:01:20 by mfeldman         ###   ########.fr       */
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
		Zombie&	operator=(Zombie const &rhs);

    	void	announce() const;
		
	private:
		std::string	_name;
};

Zombie*	new_zombie(std::string name);
void	random_chump(std::string name);