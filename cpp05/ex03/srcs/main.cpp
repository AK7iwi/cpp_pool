/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/02 11:04:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *new_form = b.make_form("shrubbery creation", "hello");

		a.sign_form(*new_form);
		a.execute_form(*new_form);
		delete (new_form);
	}
	
	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *new_form = b.make_form("creation", "hello");
		(void)new_form;
	}

	{
		Bureaucrat	a("BOSS", 1);
		Intern		b;

		AForm *new_form = b.make_form("robotomy request", "Bender");

		a.sign_form(*new_form);
		a.execute_form(*new_form);
		delete (new_form);
	}
}
