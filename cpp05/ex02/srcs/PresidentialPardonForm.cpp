/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/31 18:43:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialForm", 25, 5)
	, _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) :
	AForm("PresidentialForm", 25, 5)
	, _target(cpy._target)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) 
{	    
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const 
{
	try 
	{
		AForm::execute(bureaucrat);
		
		std::cout	<< _target
					<< " has been pardoned by Zaphod Beeblebrox."
					<< std::endl;
	} 
	catch(AForm::grade_too_high_exception &err) 
	{
		std::cout << err.too_high();
	} 
	catch(AForm::form_is_not_signed &err) 
	{
		std::cout << err.not_signed();
	}
}