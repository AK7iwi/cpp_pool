/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:00:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class AForm;

class Bureaucrat 
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &rhs);

		void		sign_form(AForm &form);
		void 		executeForm(AForm const &form) const; 
		void		increment_grade();
		void		decrement_grade();
		std::string	get_name() const;
		uint8_t		get_grade() const;

		class grade_too_high_exception : public std::exception 
		{
			public:
				std::string	too_high() const throw();
		};

		class grade_too_low_exception : public std::exception 
		{
			public:
				std::string	too_low() const throw();
		};

	private:
    	const std::string	_name;
    	uint8_t 			_grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &cpy);
