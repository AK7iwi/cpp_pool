/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:44:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/29 13:44:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyForm", 72, 45)
	, _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) :
	AForm("RobotomyForm", 72, 45)
	, _target(cpy._target)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) 
{	    
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const 
{
	try 
	{
		AForm::execute(bureaucrat);
		
		// std::srand(std::time(NULL));
		int rand = std::rand();
		
		std::cout 	<< "BrRrrrRrrrrrrrRrrr" 
					<< std::endl;
		std::cout	<< _target
					<< (rand % 2 ? " is robitized" : " robotization failed")
					<< std::endl;

	} 
	catch(AForm::grade_too_high_exception &err) 
	{
		std::cout << err.too_high();
	} 
	catch(AForm::FormIsNotSigned &err) 
	{
		std::cout << err.notSigned();
	}
}