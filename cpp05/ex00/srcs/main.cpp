/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:08 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 17:11:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try 
	{
		std::cout<< "Test #1 : Create Bureaucrat A with grade 0" << std::endl;
		Bureaucrat A("A", 0);
	}
	catch (Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception &e)
	{std::cerr << e.too_low() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #2 : Create Bureaucrat B with grade 151" << std::endl;
		Bureaucrat B("B", 151);
	}
	catch (Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #3 : Create Bureaucrat C with grade 1"<< std::endl;
		Bureaucrat C("C", 1);
		std::cout << C << std::endl;
		std::cout << "Test #4 : Bureaucrat C decrement grade" << std::endl;
		C.decrement_grade();
		std::cout << C << std::endl;
		std::cout << "Test #5 : Bureaucrat C increment grade" << std::endl;
		C.increment_grade();
		std::cout << C << std::endl;
		std::cout << "Test #6 : Bureaucrat C increment grade" << std::endl;
		C.increment_grade();
	} 
	catch (Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low()  << std::endl;}
	
	try 
	{
		std::cout << "\nTest #7 : Create Bureaucrat D with grade 150" << std::endl;
		Bureaucrat D("D", 150);
		std::cout << D << std::endl;
		std::cout << "Test #8 : Bureaucrat D increment grade" << std::endl;
		D.increment_grade();
		std::cout << D << std::endl;
		std::cout << "Test #9 : Bureaucrat D decrement grade" << std::endl;
		D.decrement_grade();
		std::cout << D << std::endl;
		std::cout << "Test #10 : Bureaucrat D decrement grade" << std::endl;
		D.decrement_grade();
	} 
	catch (Bureaucrat::grade_too_high_exception &e) 
	{std::cerr << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception &e) 
	{std::cerr  << e.too_low()  << std::endl;}
	
	try 
	{
		std::cout << "\nTest #11 : Create Bureaucrat E with grade 100"  << std::endl;
		Bureaucrat E("E", 100);
		std::cout << E << std::endl;
		std::cout << "Test #12 : Create Bureaucrat F via copy of Bureaucrat E" << std::endl;
		Bureaucrat F(E);
		std::cout << F << std::endl;
	} 
	catch (Bureaucrat::grade_too_high_exception &e) 
	{std::cerr  << e.too_high() << std::endl;} 
	catch (Bureaucrat::grade_too_low_exception &e) 
	{std::cerr << e.too_low() << std::endl;}
	
	return (EXIT_SUCCESS);
}