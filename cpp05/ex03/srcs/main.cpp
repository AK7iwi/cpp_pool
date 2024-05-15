/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/15 18:03:28 by mfeldman         ###   ########.fr       */
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
		std:: cout << "Test1: " << std::endl;
		
		Bureaucrat	BOSS1("BOSS1", 1);
		Intern		I1;

		AForm *new_form1 = I1.make_form("shrubbery creation", "hello");

		BOSS1.sign_form(*new_form1);
		BOSS1.execute_form(*new_form1);
		delete (new_form1);
	}
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		std:: cout << "Test2: " << std::endl;

		Bureaucrat	BOOS2("BOSS2", 1);
		Intern		I2;

		AForm *new_form2 = 	I2.make_form("creation", "hello");
		(void)new_form2;
	}
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
	

	try
	{
		std:: cout << "Test3: " << std::endl;

		Bureaucrat	BOSS3("BOSS3", 1);
		Intern		I3;

		AForm *new_form3 = I3.make_form("robotomy request", "Bender");

		BOSS3.sign_form(*new_form3);
		BOSS3.execute_form(*new_form3);
		delete (new_form3);
	}
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		std:: cout << "Test4: " << std::endl;

		Bureaucrat	BOSS4("BOSS4", 0);
		Intern		I4;

		AForm *new_form4 = I4.make_form("robotomy request", "Bender");

		BOSS4.sign_form(*new_form4);
		BOSS4.execute_form(*new_form4);
		delete (new_form4);
	}
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}
	catch (std::exception const  &e)
	{std::cerr << e.what() << std::endl;}

	return (EXIT_SUCCESS);
}
