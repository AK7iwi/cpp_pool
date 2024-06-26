/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 16:58:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Constructors & operators*/

Bureaucrat::Bureaucrat(std::string const &name, int const grade) : 
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
    os	<< bureaucrat.get_name() 
		<< ", bureaucrat grade "
		<< (int)bureaucrat.get_grade()
		<< std::endl;
		
    return (os);
}

/*Form methods*/

void	Bureaucrat::sign_form(AForm &form) const
{
	try
	{
		form.be_signed(*this);
		
		std::cout	<< (*this).get_name()
					<< " signed "
					<< form.get_name()
					<< std::endl;
	}
	catch (AForm::grade_too_low_exception const &e)
	{
		std::cerr 	<< (*this).get_name()
					<< " couldn't signed "
					<< form.get_name()
					<< " because grade is too low"
					<< std::endl;
	}
}

void		Bureaucrat::execute_form(AForm const &form) const 
{
	try
	{
		form.execute(*this);
		
		std::cout	<< (*this).get_name()
					<< " executed "
					<< form.get_name()
					<< std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr	<< std::endl
					<< (*this).get_name()
					<< " can't execute "
					<< form.get_name()
					<< " because "
					<< e.what()
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

uint8_t 			Bureaucrat::get_grade() const
{return (_grade);}

/*Exceptions*/

char const* Bureaucrat::grade_too_high_exception::what() const throw() 
{return ("Bureaucrat grade is too high");}

char const*	Bureaucrat::grade_too_low_exception::what() const throw() 
{return ("Bureaucrat grade is too low");}

