/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:57:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 21:16:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : 
	_type(type) 
{std::cout << "Type default constructor called for AMateria" << std::endl;}

AMateria::AMateria(AMateria const &cpy) : _type(cpy._type) 
{std::cout << "Copy constructor called for AMateria" << std::endl;}

AMateria::~AMateria()
{std::cout << "Destructor called for AMateria" << std::endl;}

AMateria&	AMateria::operator=(AMateria const &rhs) 
{	
    std::cout << "Copy assignment operator called for AMateria" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const&	AMateria::get_type() const 
{return (_type);}

void				AMateria::use(ICharacter &target) 
{std::cout << "* uses materia on " << target.get_name() << " *" << std::endl;}
