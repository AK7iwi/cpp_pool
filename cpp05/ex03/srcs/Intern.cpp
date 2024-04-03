/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:42:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/02 11:59:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {};

Intern::Intern(Intern const &cpy) 
{*this = cpy;}

Intern::~Intern() {};

Intern		&Intern::operator=(Intern const &rhs)
{(void)rhs; return (*this);}

static AForm	*newShrubbery(std::string form_target) 
{return (new ShrubberyCreationForm(form_target));}

static AForm	*newRobotomy(std::string form_target) 
{return (new RobotomyRequestForm(form_target));}

static AForm	*newPresidential(std::string form_target) 
{return (new PresidentialPardonForm(form_target));}

static int8_t	what_form(std::string form_name) 
{
	
	int8_t	id = -1;
	std::string	form_name_list[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (uint8_t i = 0; i < 3; i++)
		if (form_name_list[i] == form_name)
			id = i;
	return (id);
}

AForm	*Intern::make_form(std::string form_name, std::string form_target) 
{

	AForm *(*f[3])(std::string form_target) = 
	{ 
		&newShrubbery,
		&newRobotomy,
		&newPresidential
	};
	
	int16_t id = what_form(form_name);
	AForm *new_form = NULL;

	if (id != -1) 
	{
		new_form = f[id](form_target);
		
		std::cout	<< "Intern creates : "
					<< new_form->get_name()
					<< std::endl;
	} 
	else 
	{
		std::cout	<< "Invalid form_name"
					<< std::endl;
	}
	return (new_form);
}
