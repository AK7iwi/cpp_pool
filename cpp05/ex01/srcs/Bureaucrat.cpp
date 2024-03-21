/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/21 13:11:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw grade_too_high_exception();
	else if (grade > 150)
		throw grade_too_low_exception();
	_grade = grade;
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade) 
{ 
	std::cout << "Bureaucrat copy constructor called " <<std::endl;
}

Bureaucrat::~Bureaucrat() {std::cout << "Bureaucrat destructor called" << std::endl;}


Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs) 
{	
    std::cout << "Bureaucrat copy assignement operator called" << std::endl;
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &bureaucrat) 
{
    os << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade();
    return(os);
}

void	Bureaucrat::sign_form(Form &form) 
{
	try
		form.be_signed(*this);
	catch(const std::exception &err) 
	{
		std::cout 	<< this->getName()
					<< " couldn't signed "
					<< form.getName()
					<< " because form grade is too low"
					<< std::endl;
		return ;
	}
	std::cout 	<< this->getName()
				<< " signed "
				<< form.getName()
				<< std::endl;
}

void Bureaucrat::increment_grade() 
{
    if (_grade > 1)
        _grade--;
    else
        throw grade_too_high_exception();
}

void Bureaucrat::decrement_grade() 
{
    if (_grade < 150)
        _grade++;
    else
        throw grade_too_low_exception();
}

std::string	Bureaucrat::grade_too_high_exception::too_high() const throw() 
{
	return ("Bureaucrat grade is too high");
}

std::string	Bureaucrat::grade_too_low_exception::too_low() const throw() 
{
	return ("Bureaucrat grade is too low");
}

std::string Bureaucrat::get_name() const {return(_name);}

uint8_t Bureaucrat::get_grade() const {return(_grade);}
