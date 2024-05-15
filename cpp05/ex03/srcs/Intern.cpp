/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:42:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/15 17:39:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*Constructors & operators*/

Intern::Intern() {};

Intern::Intern(Intern const &cpy) 
{*this = cpy;}

Intern::~Intern() {};

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

/*Getters*/

static inline AForm *new_shrubbery(std::string form_target) 
{return (new ShrubberyCreationForm(form_target));}

static inline AForm *new_robotomy(std::string form_target) 
{return (new RobotomyRequestForm(form_target));}

static inline AForm *new_presidential(std::string formTarget) 
{return (new PresidentialPardonForm(formTarget));}

/*Form methods*/

static int8_t	what_form(std::string const form_name) 
{
	std::string	form_name_list[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (uint8_t i = 0; i < 3; i++)
		if (form_name_list[i] == form_name)
			return (i);
			
	return (-1);
}

AForm	*Intern::make_form(std::string const form_name, std::string const form_target) 
{
	AForm *(*f[3])(std::string form_target) = 
	{ 
		&new_shrubbery,
		&new_robotomy,
		&new_presidential
	};
	
	AForm *new_form = NULL;
	int8_t id = what_form(form_name);
		
	if (id == -1)
		throw (std::out_of_range("Invalid Form name"));
	
	new_form = f[id](form_target);
		
	std::cout	<< "Intern creates : "
				<< new_form->get_name()
				<< std::endl;
	
	return (new_form);
}
