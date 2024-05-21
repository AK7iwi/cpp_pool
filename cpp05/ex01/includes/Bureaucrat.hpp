/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 15:05:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <stdexcept>
#include <stdint.h>
#include <stdlib.h>

class Form;

class Bureaucrat 
{
	public:
		/* Constructors & operators */
		
		Bureaucrat(std::string const name, int const grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const &rhs);

		/* Form methods */
		
		void				sign_form(Form &form) const; 

		/* Grade methods */
		
		void				increment_grade();
		void				decrement_grade();

		/* Getters */
		
		std::string	inline	get_name() const;
		uint8_t				get_grade() const;

		/* Exceptions */

		class grade_too_high_exception : public std::exception
		{
			public:
				char const* what() const throw();
		};

		class grade_too_low_exception : public std::exception
		{
			public:
				char const* what() const throw();
		};

	private:
    	std::string	const	_name;
    	uint8_t 			_grade;
};

/* Operator */

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif /* BUREAUCRAT_HPP */
