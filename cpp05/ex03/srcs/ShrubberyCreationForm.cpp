/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:43:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/12 19:37:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*Constructors & operators*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("ShrubberyForm", 145, 137),
	_target(target)	{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) :  
	AForm("ShrubberyForm", 145, 137),
	_target(cpy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) 
{return (*this);}

/*Execute method*/

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const 
{
	try 
	{
		AForm::execute(bureaucrat);
		
		std::ofstream	outFile((_target + "_shruberry").c_str());

		outFile << "      /\\      "		<< std::endl;
		outFile << "     /\\*\\     "		<< std::endl;
		outFile << "    /\\O\\*\\    "		<< std::endl;
		outFile << "   /*/\\/\\/\\   "		<< std::endl;
		outFile << "  /\\O\\/\\*\\/\\  "	<< std::endl;
		outFile << " /\\*\\/\\*\\/\\/\\ "	<< std::endl;
		outFile << "/\\O\\/\\/*/\\/O/\\"	<< std::endl;
		outFile << "      ||      "			<< std::endl;
		outFile << "      ||      "			<< std::endl;
		outFile << "      ||      "			<< std::endl;	
	} 
	catch (AForm::grade_too_high_exception const &e) 
	{std::cerr << e.too_high();} 
	catch (AForm::form_is_not_signed const &e) 
	{std::cerr << e.not_signed();}
}

