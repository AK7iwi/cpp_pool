/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:42:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 14:09:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern 
{
	public:
		/*Constructors & operators*/
		
		Intern();
		Intern(Intern const &cpy);
		virtual ~Intern();
		Intern& operator=(Intern const &rhs);

		/*Form methods*/
		
		AForm	*make_form(std::string const form_name, std::string const form_target);
};

#endif /* INTERN_HPP */