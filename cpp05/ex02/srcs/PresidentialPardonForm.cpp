/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 16:57:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*Constructors & operators*/

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	AForm("PresidentialForm", 25, 5), 
	_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) :
	AForm("PresidentialForm", 25, 5),
	_target(cpy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) 
{
	(void)rhs;
	return (*this);
}

/*Execute method*/

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const 
{
	AForm::execute(bureaucrat);
		
	std::cout	<< _target
				<< " has been pardoned by Zaphod Beeblebrox."
				<< std::endl;
}