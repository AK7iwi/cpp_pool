/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:45:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/10 18:49:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*Constructors & operators*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialForm", 25, 5), 
	_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) :
	AForm("PresidentialForm", 25, 5),
	_target(cpy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) 
{	    
	if (this != &rhs)
		_target = rhs._target;
		
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const 
{
	try 
	{
		AForm::execute(bureaucrat);
		
		std::cout	<< _target
					<< " has been pardoned by Zaphod Beeblebrox."
					<< std::endl;
					
	} 
	catch (AForm::grade_too_high_exception const &e) 
	{std::cerr << e.too_high();} 
	catch (AForm::form_is_not_signed const &e) 
	{std::cerr << e.not_signed();}
}