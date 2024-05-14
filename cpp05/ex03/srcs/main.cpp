/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/14 17:07:33 by mfeldman         ###   ########.fr       */
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
	try
	{
		
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat	a("BOSS1", 1);
	Intern		b;

	AForm *new_form1 = b.make_form("shrubbery creation", "hello");

	a.sign_form(*new_form1);
	a.execute_form(*new_form1);
	delete (new_form1);

	Bureaucrat	c("BOSS2", 1);
	Intern		d;

	AForm *new_form2 = d.make_form("creation", "hello");
	(void)new_form2;

	Bureaucrat	e("BOSS3", 1);
	Intern		f;

	AForm *new_form3 = f.make_form("robotomy request", "Bender");

	e.sign_form(*new_form3);
	e.execute_form(*new_form3);
	delete (new_form3);

	return (EXIT_SUCCESS);
}
