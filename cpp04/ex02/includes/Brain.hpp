/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:54:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 16:09:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AAnimal.hpp"

class Brain
{
	public:
    	Brain();
        Brain(Brain const &cpy);
        virtual ~Brain();
		Brain&	operator=(Brain const &rhs);

	private:
		std::string     _ideas[100];
};