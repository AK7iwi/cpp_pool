/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:52 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/21 15:16:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (grade < 1)
		throw grade_too_high_exception();
	else if (grade > 150)
		throw grade_too_low_exception();
	_grade = grade;
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
    os << bureaucrat.get_name() << ", bureaucrat grade " << (int)bureaucrat.get_grade();
    return(os);
}

std::string Bureaucrat::get_name() const {return(_name);}

uint8_t Bureaucrat::get_grade() const {return(_grade);}

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

std::string	Bureaucrat::grade_too_high_exception::too_high() const throw() {return ("Bureaucrat grade is too high");}

std::string	Bureaucrat::grade_too_low_exception::too_low() const throw() {return ("Bureaucrat grade is too low");}
