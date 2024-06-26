/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 16:54:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Constructors & operators */

AForm::AForm(std::string const &name, int const grade_to_sign, int const grade_to_execute) :
    _name(name), 
	_signed_status(false), 
	_grade_to_sign(grade_to_sign), 
	_grade_to_execute(grade_to_execute) 
{
    if (_grade_to_sign < 1 || _grade_to_execute < 1)
        throw (grade_too_high_exception());
    else if (_grade_to_sign > 150 || _grade_to_execute > 150)
        throw (grade_too_low_exception());
}

AForm::AForm(AForm const &cpy) : 
	_name(cpy._name),
	_signed_status(cpy._signed_status), 
	_grade_to_sign(cpy._grade_to_sign), 
	_grade_to_execute(cpy._grade_to_execute) {}

AForm::~AForm() {}

AForm&	AForm::operator=(AForm const &rhs) 
{	
	if (this != &rhs)
		_signed_status = rhs._signed_status;
		
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, AForm const &form) 
{
	os	<< "AForm " 
		<< form.get_name()
		<< (!form.get_signed_status() ? " is not signed" : " is signed")
		<< std::endl;
		
	return (os);
}

/* Status methods */

void	AForm::be_signed(Bureaucrat const &bureaucrat) 
{
	if (bureaucrat.get_grade() > _grade_to_sign)
		throw (AForm::grade_too_low_exception());
		
	_signed_status = true;
}

void	AForm::execute(Bureaucrat const &bureaucrat) const 
{
	if (bureaucrat.get_grade() > _grade_to_execute)
		throw (grade_too_high_exception());
	else if (!_signed_status)
		throw (form_is_not_signed());
}

/* Getters */

std::string AForm::get_name() const
{return (_name);}

uint8_t inline AForm::get_signed_status() const
{return (_signed_status);}

uint8_t inline AForm::get_grade_to_sign() const
{return (_grade_to_sign);}

uint8_t inline AForm::get_grade_to_execute() const
{return (_grade_to_execute);}

/* Exceptions */

char const*	AForm::grade_too_high_exception::what() const throw() 
{return ("Form grade is too high");}

char const*	AForm::grade_too_low_exception::what() const throw() 
{return ("Form grade is too low");}

char const*	AForm::form_is_not_signed::what() const throw()
{return ("Form is not signed");}
