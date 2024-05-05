/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:22:57 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/05 19:19:47 by mfeldman         ###   ########.fr       */
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
		Bureaucrat c("Bob", 1);
		std::cout << c << std::endl;

		PresidentialPardonForm d("PPF");
		std::cout << d << std::endl;

		c.sign_form(d);
		std::cout << d << std::endl;

		c.execute_form(d);

	} 
	catch (const Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (const Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low() << std::endl;}
	
	try 
	{
		Bureaucrat c("Bobette", 1);
		std::cout << c << std::endl;

		RobotomyRequestForm d("RBF");
		std::cout << d << std::endl;

		c.sign_form(d);
		std::cout << d << std::endl;

		c.execute_form(d);

	} 
	catch (const Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (const Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low() << std::endl;}

	try 
	{
		Bureaucrat c("Booba", 1);
		std::cout << c << std::endl;

		ShrubberyCreationForm d("SCF");
		std::cout << d << std::endl;

		c.sign_form(d);
		std::cout << d << std::endl;

		c.execute_form(d);

	} 
	catch (const Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (const Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low() << std::endl;}

	return (EXIT_SUCCESS);
}