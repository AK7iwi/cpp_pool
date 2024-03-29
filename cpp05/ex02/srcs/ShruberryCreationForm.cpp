/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:43:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/29 12:51:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("ShrubberyForm", 145, 137),
	_target(target)	
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) :  
	AForm("ShrubberyForm", 145, 137),
	_target(cpy._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) 
{	    
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat &bureaucrat) const 
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
	catch(AForm::grade_too_high_exception &err) 
	{
		std::cout << err.too_high();
	} 
	catch(AForm::FormIsNotSigned &err) 
	{
		std::cout << err.notSigned();
	}
}

