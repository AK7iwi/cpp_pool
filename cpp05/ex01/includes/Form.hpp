/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/05 23:38:55 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class Bureaucrat;

class Form 
{
	public:
		Form(std::string const name, int const grade_to_sign, int const grade_to_execute);
		Form(Form const &cpy);
		~Form();
		Form &operator=(Form const &rhs);
		
		void		be_signed(Bureaucrat &bureaucrat);
		std::string	get_name() const;
		uint8_t		get_signed_status() const;
		uint8_t		get_grade_to_sign() const;
		uint8_t		get_grade_to_execute() const;

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
    	std::string	const 	_name;
    	bool 				_signed_status;
    	int	const 			_grade_to_sign; 
   		int const  			_grade_to_execute;
};

std::ostream	&operator<<(std::ostream &os, Form &rhs);