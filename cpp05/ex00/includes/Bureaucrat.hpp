/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/21 14:34:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <stdint.h>

class Bureaucrat 
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &rhs);

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

		std::string	get_name() const;
		uint8_t		get_grade() const;

		void		increment_grade();
		void		decrement_grade();
	
	private:
    	std::string	const 	_name;
    	uint8_t 			_grade;
};

std::ostream &operator<<(std::ostream &os,Bureaucrat const &cpy);
