/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/02 09:15:38 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int grade_to_sign, int grade_to_execute) :
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

std::ostream	&operator<<(std::ostream &os, AForm &rhs) 
{
	os	<< "AForm " 
		<< rhs.get_name()
		<< (!rhs.get_signed_status() ? " is not signed, " : " is signed, ")
		<< "Bureaucrat need grade " 
		<< (int)rhs.get_grade_to_sign()
		<< " For sign it, and grade " 
		<< (int)rhs.get_grade_to_execute()
		<< " for execute it" << std::endl;
	return (os);
}

void	AForm::be_signed(Bureaucrat bureaucrat) 
{
	if (bureaucrat.get_grade() > get_grade_to_sign())
		throw (AForm::grade_too_low_exception());
	_signed_status = 1;
}

bool	AForm::execute(Bureaucrat const &executor) const 
{
	if (executor.get_grade() > this->get_grade_to_execute())
		throw (grade_too_high_exception());
	else if (!this->get_signed_status())
		throw (form_is_not_signed());
	return (1);
}

std::string AForm::get_name() const
{return (_name);}

uint8_t AForm::get_signed_status() const
{return (_signed_status);}

uint8_t AForm::get_grade_to_sign() const
{return (_grade_to_sign);}

uint8_t AForm::get_grade_to_execute() const
{return (_grade_to_execute);}

std::string	AForm::grade_too_high_exception::too_high() const throw()
{return ("Form grade is too high");}

std::string	AForm::grade_too_low_exception::too_low() const throw()
{return ("Form grade is too low");}

std::string		AForm::form_is_not_signed::not_signed() const throw()
{return ("Form is not signed");}
