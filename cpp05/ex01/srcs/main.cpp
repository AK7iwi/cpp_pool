/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:04:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 14:43:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	/* Bureaucrat test catch error */

	try 
	{
		std::cout <<"Test #1 : Create Bureaucrat A with grade 0" << std::endl;
		Bureaucrat A("A", 0);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout <<"\nTest #2 : Create Bureaucrat B with grade 151" << std::endl;
		Bureaucrat B("B", 151);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #3 : Create Bureaucrat C with grade 1" << std::endl;
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
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #7 : Create Bureaucrat D with grade 150" << std::endl;
		Bureaucrat D("D", 150);
		std::cout << D << std::endl;
		std::cout  << "Test #8 : Bureaucrat D increment grade" << std::endl;
		D.increment_grade();
		std::cout << D << std::endl;
		std::cout << "Test #9 : Bureaucrat D decrement grade" << std::endl;
		D.decrement_grade();
		std::cout << D << std::endl;
		std::cout << "Test #10 : Bureaucrat D decrement grade" << std::endl;
		D.decrement_grade();
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Bureaucrat test cpy/assignement */
	
	try 
	{
		std::cout << "\nTest 11 : Create Bureaucrat E with grade 100" << std::endl;
		Bureaucrat E("E", 100);
		std::cout << E << std::endl;
		std::cout << "Test #12 : Create Bureaucrat F via copy of Bureaucrat E" << std::endl;
		Bureaucrat F(E);
		std::cout << F << std::endl;
		std::cout << "Test #13 : Create Bureaucrat G via assignement of Bureaucrat F" << std::endl;
		Bureaucrat G = F;
		std::cout << G << std::endl;
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Test catch with the general class exception */
	
	try 
	{
		std::cout << "Test #14 : Test the catch" << std::endl;
		Bureaucrat H("H", 160);
		std::cout << H << std::endl;
	} 
	catch (std::exception const &e) 
	{std::cerr << "Catch OK" << std::endl;}
	
	/* Form test catch error */
	
	try 
	{
		std::cout << "\nTest #15 : Create Form A with sign_grade 1 and exec_grade 0" << std::endl;
		Form A("A", 1, 0);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #16 : Create Form B with sign_grade 0 and exec_grade 1" << std::endl;
		Form B("B", 0, 1);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #17 : Create Form C with sign_grade 151 and exec_grade 150" << std::endl;
		Form C("C", 151, 150);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #18 : Create Form D with sign_grade 150 and exec_grade 151" << std::endl;
		Form D("D", 150, 151);
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Form test cpy/assignement */
	
	try
	{
		std::cout << "\nTest #19 : Create Form E with sign_grade 1 and exec_grade 1" << std::endl;
		Form E("E", 1, 1);
		std::cout << E << std::endl;
		std::cout <<"Test #20 : Create Form F via copy of Form E" << std::endl;
		Form F(E);
		std::cout << F << std::endl;
		std::cout << "Test #21 : Create Form G via assignement of Form F" << std::endl;
		Form G = F;
		std::cout << G << std::endl;
	}
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}

	/* Main test */
	
	try 
	{
		std::cout << "\nTest #22 : Create Form I with sign_grade 1 and exec_grade 1" << std::endl;
		Form I("I", 1, 1);
		std::cout << I << std::endl;
		std::cout << "Test #23 : Create Form J with sign_grade 50 and exec_grade 50" << std::endl;
		Form J("J", 50, 50);
		std::cout << J << std::endl;
		std::cout << "Test #24 : Create Bureaucrat K with grade 10" << std::endl;
		Bureaucrat K("K", 10);
		std::cout << K << std::endl;
		std::cout << "Test #25 : Bureaucrat K try to sign Form I" << std::endl;
		K.sign_form(I);
		std::cout << I << std::endl;
		std::cout << "Test #26 : Bureaucrat H try to sign Form J" << std::endl;
		K.sign_form(J);
		std::cout << J << std::endl;
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	try 
	{
		std::cout << "\nTest #27 : Create Bureaucrat L with grade 100" << std::endl;
		Bureaucrat L("L", 100);
		std::cout << L << std::endl;
		std::cout << "Test #28 : Create Form M with sign_grade 99 and exec_grade 100" << std::endl;
		Form M("M", 99, 100);
		std::cout << M << std::endl;
		std::cout << "Test #29 : Bureaucrat L try to sign Form M" << std::endl;
		L.sign_form(M);
		std::cout << M << std::endl;
		std::cout << "Test #30 : Bureaucrat L increment grade" << std::endl;
		L.increment_grade();
		std::cout << L << std::endl;
		std::cout << "Test #31 : Bureaucrat L try to sign Form M" << std::endl;
		L.sign_form(M);
		std::cout << M << std::endl;
	} 
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
	
	return (EXIT_SUCCESS);
}