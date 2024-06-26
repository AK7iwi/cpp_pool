/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:59 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 17:35:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{std::cout << "Default constructor called for Brain" << std::endl;}

Brain::Brain(Brain const &cpy) 
{
	std::cout << "Copy constructor called for Brain" << std::endl;
 	for(uint8_t i = 0; i < 100; ++i)
    	_ideas[i] = cpy._ideas[i];
}

Brain::~Brain() 
{std::cout << "Destructor called for Brain" << std::endl;}

Brain&	Brain::operator=(Brain const &rhs) 
{	
    std::cout << "Copy assignment operator called for Brain" << std::endl;
	if (this != &rhs)
	{
		for (uint8_t i = 0; i < 100; ++i)
    		_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string	Brain::get_ideas(uint8_t idx) const
{return (_ideas[idx]);}

void		Brain::set_ideas(uint8_t idx, std::string ideas)
{_ideas[idx] = ideas;}