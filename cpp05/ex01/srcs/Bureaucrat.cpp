/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/11 19:44:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*Constructors & operators*/

Bureaucrat::Bureaucrat(std::string const name, int const grade) : 
	_name(name)
{
	if (grade < 1)
		throw (grade_too_high_exception());
	else if (grade > 150)
		throw (grade_too_low_exception());
		
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : 
	_name(cpy._name),
	_grade(cpy._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs) 
{	
	if (this != &rhs)
		_grade = rhs._grade;
		
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &bureaucrat) 
{
    os  << bureaucrat.get_name() 
		<< ", bureaucrat grade " 
		<< (int)bureaucrat.get_grade();
		
    return (os);
}

/*Form methods*/

void	Bureaucrat::sign_form(Form &form)
{
	try
	{
		form.be_signed(*this);
		
		std::cout	<< (*this).get_name()
					<< " signed "
					<< form.get_name()
					<< std::endl;
	}
	catch (Form::grade_too_low_exception const &e)
	{
		std::cerr 	<< (*this).get_name()
					<< " couldn't signed "
					<< form.get_name()
					<< " because "
					<< e.too_low()
					<< std::endl;
	}
}

/*Grade methods*/

void Bureaucrat::increment_grade() 
{
    if (_grade > 1)
        _grade--;
    else
        throw (grade_too_high_exception());
}

void Bureaucrat::decrement_grade() 
{
    if (_grade < 150)
        _grade++;
    else
        throw (grade_too_low_exception());
}

/*Getters*/

std::string inline	Bureaucrat::get_name() const
{return (_name);}

uint8_t				Bureaucrat::get_grade() const 
{return (_grade);}

/*Exceptions*/

std::string	Bureaucrat::grade_too_high_exception::too_high() const throw() 
{return ("Bureaucrat grade is too high");}

std::string	Bureaucrat::grade_too_low_exception::too_low() const throw() 
{return ("Bureaucrat grade is too low");}
