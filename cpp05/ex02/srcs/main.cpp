/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 13:13:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() 
{
	/*Test catch error*/
	
	try 
	{
		std::cout << "Test PPF error: " << std::endl;
		
		Bureaucrat Bob("Bob", 0);
		std::cout << Bob << std::endl;

		PresidentialPardonForm PPF1("PPF1");
		std::cout << PPF1 << std::endl;

		Bob.sign_form(PPF1);
		std::cout << PPF1 << std::endl;

		Bob.execute_form(PPF1);

	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	try 
	{
		std::cout << "\nTest PPF error 2: " << std::endl;
		
		Bureaucrat Boby("Boby", 30);
		std::cout << Boby << std::endl;

		PresidentialPardonForm PPF2("PPF2");
		std::cout << PPF2 << std::endl;

		Boby.sign_form(PPF2);
		std::cout << PPF2 << std::endl;

		Boby.execute_form(PPF2);

	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	try 
	{
		std::cout << "\nTest PPF error 3: " << std::endl;
		
		Bureaucrat Bobu("Bobu", 23);
		std::cout << Bobu << std::endl;

		PresidentialPardonForm PPF3("PPF3");
		std::cout << PPF3 << std::endl;

		Bobu.sign_form(PPF3);
		std::cout << PPF3 << std::endl;

		Bobu.execute_form(PPF3);

	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	try 
	{
		std::cout << "\nTest PPF error 4: " << std::endl;
		
		Bureaucrat Bobo("Bobo", 1);
		std::cout << Bobo << std::endl;

		PresidentialPardonForm PPF4("PPF4");
		std::cout << PPF4 << std::endl;

		Bobo.execute_form(PPF4);
		std::cout << PPF4 << std::endl;

		Bobo.sign_form(PPF4);
		std::cout << PPF4 << std::endl;

		Bobo.execute_form(PPF4);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	/*Test the PresidentialPardonForm*/
	
	try 
	{
		std::cout << "\nTest PPF: " << std::endl;
		
		Bureaucrat Bobe("Bobe", 1);
		std::cout << Bobe << std::endl;

		PresidentialPardonForm PPF5("PPF5");
		std::cout << PPF5 << std::endl;

		Bobe.sign_form(PPF5);
		std::cout << PPF5 << std::endl;

		Bobe.execute_form(PPF5);

	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	/*Test the RobotomyRequestForm*/
	
	try 
	{
		std::cout << "\nTest RBF: " << std::endl;
		
		Bureaucrat Bobette("Bobette", 1);
		std::cout << Bobette << std::endl;

		RobotomyRequestForm RBF("RBF");
		std::cout << RBF << std::endl;

		Bobette.sign_form(RBF);
		std::cout << RBF << std::endl;

		Bobette.execute_form(RBF);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/*Test the ShrubberyCreationForm*/

	try 
	{
		std::cout << "\nTest SCF: " << std::endl;
		
		Bureaucrat Booba("Booba", 1);
		std::cout << Booba << std::endl;

		ShrubberyCreationForm SCF("SCF");
		std::cout << SCF << std::endl;

		Booba.sign_form(SCF);
		std::cout << SCF << std::endl;

		Booba.execute_form(SCF);

	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	return (EXIT_SUCCESS);
}