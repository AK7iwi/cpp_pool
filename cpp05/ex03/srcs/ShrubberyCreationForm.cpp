/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:43:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/26 17:07:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* Constructors & operators */

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : 
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

/* Execute method */

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const 
{
	AForm::execute(bureaucrat);
		
	std::ofstream	out_file((_target + "_shruberry").c_str());

	out_file << "       K      "		<< std::endl;
	out_file << "      /\\      "		<< std::endl;
	out_file << "     /\\*\\     "		<< std::endl;
	out_file << "    /\\O\\*\\    "		<< std::endl;
	out_file << "   /*/\\/\\/\\   "		<< std::endl;
	out_file << "  /\\O\\/\\*\\/\\  "	<< std::endl;
	out_file << " /\\*\\/\\*\\/\\/\\ "	<< std::endl;
	out_file << "/\\O\\/\\/*/\\/O/\\"	<< std::endl;
	out_file << "      ||      "		<< std::endl;
	out_file << "      ||      "		<< std::endl;
	out_file << "      ||      "		<< std::endl;	
}

