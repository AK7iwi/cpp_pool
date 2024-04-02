/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/02 08:56:59 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class Bureaucrat;

class AForm 
{
	public:
		AForm(std::string const name, int grade_to_sign, int grade_to_execute);
		AForm(AForm const &cpy);
		virtual ~AForm();
		AForm &operator=(AForm const &rhs);
		
		virtual bool	execute(Bureaucrat const &bureaucrat) const = 0;
		void			be_signed(Bureaucrat bureaucrat);
		std::string		get_name() const;
		uint8_t			get_signed_status() const;
		uint8_t			get_grade_to_sign() const;
		uint8_t			get_grade_to_execute() const;

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

		class form_is_not_signed : public std::exception 
		{
			public:
				std::string		not_signed() const throw();
		};
	
	private:
    	std::string	const 	_name;
    	bool 				_signed_status;
    	int	const 			_grade_to_sign; 
   		int const  			_grade_to_execute; 
};

std::ostream	&operator<<(std::ostream &os, AForm &rhs);