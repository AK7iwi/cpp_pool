/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 14:47:23 by mfeldman         ###   ########.fr       */
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
	/* Test catch error */
	
	try
	{
		std:: cout << "Test1: " << std::endl;

		Bureaucrat	BOSS1("BOSS1", 0);
		Intern		I1;

		AForm *new_form1 = I1.make_form("robotomy request", "Bender");

		BOSS1.sign_form(*new_form1);
		BOSS1.execute_form(*new_form1);
		delete (new_form1);
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Test invalid form name */
	
	try
	{
		std:: cout << "\nTest2: " << std::endl;

		Bureaucrat	BOOS2("BOSS2", 1);
		Intern		I2;

		AForm *new_form2 = 	I2.make_form("creation", "hello");
		(void)new_form2;
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	/* Test shrubbery creation */
	
	try
	{
		std:: cout << "\nTest shrubbery creation: " << std::endl;
		
		Bureaucrat	BOSS3("BOSS3", 1);
		Intern		I3;

		AForm *new_form3 = I3.make_form("shrubbery creation", "hello");

		BOSS3.sign_form(*new_form3);
		BOSS3.execute_form(*new_form3);
		delete (new_form3);
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Test robotomy request */

	try
	{
		std:: cout << "\nTest robotomy request: " << std::endl;

		Bureaucrat	BOSS4("BOSS4", 1);
		Intern		I4;

		AForm *new_form4 = I4.make_form("robotomy request", "Bender");

		BOSS4.sign_form(*new_form4);
		BOSS4.execute_form(*new_form4);
		delete (new_form4);
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	try
	{
		std:: cout << "\nTest presidential pardon: " << std::endl;

		Bureaucrat	BOSS5("BOSS5", 1);
		Intern		I5;

		AForm *new_form5 = I5.make_form("presidential pardon", "Bender");

		BOSS5.sign_form(*new_form5);
		BOSS5.execute_form(*new_form5);
		delete (new_form5);
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	return (EXIT_SUCCESS);
}
