/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:04 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/21 03:38:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat 
{
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &cpy);

		class GradeTooHighException : public std::exception {
			public:
				std::string	tooHigh() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				std::string	tooLow() const throw();
		};

		std::string	get_name() const;
		int			get_grade() const;

		void		increment_grade();
		void		decrement_grade();
	
	private:
    	const std::string	_name;
    	int 				_grade; //uint8_t 
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &cpy);
