/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:44:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 16:57:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors & operators */

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	AForm("RobotomyForm", 72, 45), 
	_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) :
	AForm("RobotomyForm", 72, 45),
	_target(cpy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) 
{
	(void)rhs;
	return (*this);
}

/* Execute method */

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const 
{
	AForm::execute(bureaucrat);
		
	std::srand(std::time(NULL));
	int rand = std::rand();
		
	std::cout 	<< "*drilling noise*" 
				<< std::endl
				<< _target
				<< (rand % 2 ? " has been robotomized successfully" : " Robotomy failed.")
				<< std::endl;
}