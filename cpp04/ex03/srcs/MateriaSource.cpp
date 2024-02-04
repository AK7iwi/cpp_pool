/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:58:00 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:00:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
	std::cout << "Type default constructor called for MateriaSource" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
        _learned_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &cpy) 
{
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
    {
        if (cpy._learned_materias[i] != NULL)
            _learned_materias[i] = cpy._learned_materias[i]->clone();
        else
            _learned_materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource() 
{
	std::cout << "Destructor called for MateriaSource" << std::endl;
	for (uint8_t i = 0; i < 4; ++i)
        delete (_learned_materias[i]);
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs) 
{	
    std::cout << "Copy assignment operator called for MateriaSource" << std::endl;
	if (this != &rhs)
	{
        for (uint8_t i = 0; i < 4; ++i)
            delete (_learned_materias[i]);
        for (uint8_t i = 0; i < 4; ++i)
        {
            if (rhs._learned_materias[i] != NULL)
                _learned_materias[i] = rhs._learned_materias[i]->clone();
            else
                _learned_materias[i] = NULL;
        }
    }
    return (*this);
}

void	MateriaSource::learn_materia(AMateria* m)
{
    for (uint8_t i = 0; i < 4; ++i)
    {
        if (_learned_materias[i] == NULL)
        {
            _learned_materias[i] = m->clone();
            return;
        }
    }
}

AMateria*	MateriaSource::create_materia(const std::string& type)
{
    for (uint8_t i = 0; i < 4; ++i)
    {
        if (_learned_materias[i] != NULL && _learned_materias[i]->get_type() == type)
            return (_learned_materias[i]->clone());
    }
    return (0);
}