/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:44:21 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/11 19:56:20 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*Constructors & operators*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyForm", 72, 45), 
	_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) :
	AForm("RobotomyForm", 72, 45),
	_target(cpy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) 
{	    
	if (this != &rhs)
		_target = rhs._target;
		
	return (*this);
}

/*Execute method*/

void	RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const 
{
	try 
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
	catch (AForm::grade_too_high_exception const &e) 
	{std::cerr << e.too_high();} 
	catch (AForm::form_is_not_signed const &e) 
	{std::cerr << e.not_signed();}
}