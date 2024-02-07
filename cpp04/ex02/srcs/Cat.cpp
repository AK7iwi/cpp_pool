/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:01:23 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/07 13:23:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()) {std::cout << "Default constructor called for Cat" << std::endl;}

Cat::Cat(Cat const &cpy) : AAnimal(cpy._type), _brain(new Brain(*cpy._brain)) {std::cout << "Copy constructor called for Cat" << std::endl;}

Cat::~Cat() 
{
	std::cout << "Destructor called for Cat" << std::endl;
	delete (_brain);
}

Cat&	Cat::operator=(Cat const &rhs) 
{	
    std::cout << "Copy assignment operator called for Cat" << std::endl;
	if (this != &rhs)
	{
		 delete (_brain);
  		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return (*this);
}

void	Cat::make_sound() const {std::cout << "Miaou! Miaou!" << std::endl;}

Brain	*Cat::get_brain() const {return (_brain);}