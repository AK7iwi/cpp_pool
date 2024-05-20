/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:43:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/20 15:07:05 by mfeldman         ###   ########.fr       */
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
{
	(void)rhs;
	return (*this);
}

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
	catch (std::exception const &e) 
	{std::cerr << e.what() << std::endl;}
}

