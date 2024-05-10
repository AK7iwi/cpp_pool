/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:42:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/10 18:54:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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
		
		AForm	*make_form(std::string form_name, std::string form_target);
};