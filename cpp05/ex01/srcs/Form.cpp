/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 16:53:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors & operators */

Form::Form(std::string const &name, int const grade_to_sign, int const grade_to_execute) :
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

Form::Form(Form const &cpy) : 
	_name(cpy._name),
	_signed_status(cpy._signed_status), 
	_grade_to_sign(cpy._grade_to_sign), 
	_grade_to_execute(cpy._grade_to_execute) {}

Form::~Form() {}

Form&	Form::operator=(Form const &rhs) 
{	
	if (this != &rhs)
		_signed_status = rhs._signed_status;
		
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Form const &form) 
{
	os	<< "Form " 
		<< form.get_name()
		<< (!form.get_signed_status() ? " is not signed" : " is signed")
		<< std::endl;
		
	return (os);
}

/* Status methods */

void	Form::be_signed(Bureaucrat const &bureaucrat) 
{
	if (bureaucrat.get_grade() > _grade_to_sign)
		throw (Form::grade_too_low_exception());
		
	_signed_status = true;
}

/* Getters */

std::string 	Form::get_name() const 
{return (_name);}

uint8_t inline 	Form::get_signed_status() const
{return (_signed_status);}

uint8_t inline  Form::get_grade_to_sign() const
{return (_grade_to_sign);}

uint8_t inline	Form::get_grade_to_execute() const
{return (_grade_to_execute);}

/* Exceptions */

char const*	Form::grade_too_high_exception::what() const throw() 
{return ("Form grade is too high");}

char const*	Form::grade_too_low_exception::what() const throw() 
{return ("Form grade is too low");}
