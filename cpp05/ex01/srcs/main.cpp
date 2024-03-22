/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:04:44 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/22 15:53:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try 
	{
		std::cout <<"Test #1 : Create Bureaucrat A with grade 0" << std::endl;
		Bureaucrat A("A", 0);
	} 
	catch(Bureaucrat::grade_too_high_exception &e)
	{
		std::cout << e.too_high() <<std::endl;
	} 
	catch(Bureaucrat::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
	try 
	{
		std::cout <<"\nTest #2 : Create Bureaucrat B with grade 151" << std::endl;
		Bureaucrat B("B", 151);
	} 
	catch(Bureaucrat::grade_too_high_exception &e)
	{
		std::cout << e.too_high()<< std::endl;
	} 
	catch(Bureaucrat::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
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
	catch(Bureaucrat::grade_too_high_exception &e) 
	{
		std::cout  << e.too_high() << std::endl;
	} 
	catch(Bureaucrat::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
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
	catch(Bureaucrat::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Bureaucrat::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}

	try 
	{
		std::cout << "\nTest 11 : Create Bureaucrat E with grade 100" << std::endl;
		Bureaucrat E("E", 100);
		std::cout << E << std::endl;
		std::cout << "Test #12 : Create Bureaucrat F via copy of Bureaucrat E" << std::endl;
		Bureaucrat F(E);
		std::cout << F << std::endl;
	} 
	catch(Bureaucrat::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Bureaucrat::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
	
	try 
	{
		std::cout << "\nTest #13 : Create Form A with sign_grade 1 and exec_grade 0" << std::endl;
		Form A("A", 1, 0);
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Form::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
	try 
	{
		std::cout << "\nTest #14 : Create Form B with sign_grade 0 and exec_grade <1>" << std::endl;
		Form B("B", 0, 1);
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Form::grade_too_low_exception &e) 
	{
		std::cout << e.too_low()  << std::endl;
	}
	try 
	{
		std::cout << "\nTest #15 : Create Form C with sign_grade 151 and exec_grade 150" << std::endl;
		Form C("C", 151, 150);
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Form::grade_too_low_exception &e) 
	{
		std::cout << e.too_low() << std::endl;
	}
	try 
	{
		std::cout << "\nTest #16 : Create Form D with sign_grade 150 and exec_grade 151" << std::endl;
		Form D("D", 150, 151);
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Form::grade_too_low_exception &e) 
	{
		std::cout << e.too_low()  << std::endl;
	}
	try 
	{
		std::cout << "\nTest #17 : Create Form E with sign_grade 1 and exec_grade 1" << std::endl;
		Form E("E", 1, 1);
		std::cout << E << std::endl;
		std::cout <<"Test #18 : Create Form F via copy of Form E" << std::endl;
		Form F(E);
		std::cout << F << std::endl;
		std::cout << "Test #19 : Create Bureaucrat G with grade 10" << std::endl;
		Bureaucrat G("G", 10);
		std::cout << G << std::endl;
		std::cout << "Test #20 : Create Form H with sign_grade 50 and exec_grade 50" << std::endl;
		Form H("H", 50, 50);
		std::cout << H << std::endl;
		std::cout << "Test #21 : Bureaucrat G try to sign Form H" << std::endl;
		G.sign_form(H);
		std::cout << H << std::endl;
		std::cout << "Test #22 : Bureaucrat G try to sign Form E" << std::endl;
		std::cout << E << std::endl;
		G.sign_form(E);
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	}
	catch(Form::grade_too_low_exception &e)
	{
		std::cout << e.too_low() << std::endl;
	}
	try 
	{
		std::cout << "\nTest #23 : Create Bureaucrat I with grade 100" << std::endl;
		Bureaucrat I("I", 100);
		std::cout << I << std::endl;
		std::cout << "Test #24 : Create Form J with sign_grade 99 and exec_grade 99" << std::endl;
		Form J("J", 99, 99);
		std::cout << J << std::endl;
		std::cout << "Test #25 : Bureaucrat I try to sign Form J" << std::endl;
		I.sign_form(J);
		std::cout << J << std::endl;
		std::cout << "Test #26 : Bureaucrat I increment grade" << std::endl;
		I.increment_grade();
		std::cout << I << std::endl;
		std::cout << "Test #27 : Bureaucrat I try to sign Form J" << std::endl;
		I.sign_form(J);
		std::cout << J << std::endl;
	} 
	catch(Form::grade_too_high_exception &e) 
	{
		std::cout << e.too_high() << std::endl;
	} 
	catch(Form::grade_too_low_exception &e) 
	{
		std::cout << e.too_low()  << std::endl;
	}
	return (0);
}