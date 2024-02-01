/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:00 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 18:42:21 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {std::cout << "Type default constructor called for MateriaSource" << std::endl;}

MateriaSource::MateriaSource(MateriaSource const &cpy) {std::cout << "Copy constructor called for MateriaSource" << std::endl;}

MateriaSource::~MateriaSource() {std::cout << "Destructor called for MateriaSource" << std::endl;}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs) 
{	
    std::cout << "Copy assignment operator called for MateriaSource" << std::endl;
	if (this != &rhs) 
		return (*this);
}