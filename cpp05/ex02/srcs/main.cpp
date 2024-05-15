/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/15 17:53:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() 
{
	try 
	{
		std::cout << "Test PPF: " << std::endl;
		
		Bureaucrat Bob("Bob", 1);
		std::cout << Bob << std::endl;

		PresidentialPardonForm PPF("PPF");
		std::cout << PPF << std::endl;

		Bob.sign_form(PPF);
		std::cout << PPF << std::endl;

		Bob.execute_form(PPF);

	} 
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}
	
	try 
	{
		std::cout << "Test RBF: " << std::endl;
		
		Bureaucrat Bobette("Bobette", 1);
		std::cout << Bobette << std::endl;

		RobotomyRequestForm RBF("RBF");
		std::cout << RBF << std::endl;

		Bobette.sign_form(RBF);
		std::cout << RBF << std::endl;

		Bobette.execute_form(RBF);
	} 
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}

	try 
	{
		std::cout << "Test SCF: " << std::endl;
		
		Bureaucrat Booba("Booba", 1);
		std::cout << Booba << std::endl;

		ShrubberyCreationForm SCF("SCF");
		std::cout << SCF << std::endl;

		Booba.sign_form(SCF);
		std::cout << SCF << std::endl;

		Booba.execute_form(SCF);

	} 
	catch (Bureaucrat::grade_too_high_exception const &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception const &e) 
	{std::cerr << e.too_low() << std::endl;}

	return (EXIT_SUCCESS);
}