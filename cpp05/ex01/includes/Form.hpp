/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/15 17:33:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <stdint.h>

class Bureaucrat;

class Form 
{
	public:
		/*Constructors & operators*/
	
		Form(std::string const name, int const grade_to_sign, int const grade_to_execute);
		Form(Form const &cpy);
		~Form();
		Form& operator=(Form const &rhs);
		
		/*Satus methods*/
	
		void			be_signed(Bureaucrat const &bureaucrat);
		
		/*Getters*/
		
		std::string		get_name() 				const;
		uint8_t	inline  get_signed_status() 	const;
		uint8_t inline 	get_grade_to_sign() 	const;
		uint8_t	inline 	get_grade_to_execute() 	const;

		/*Exceptions*/
		
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
    	std::string	const	_name;
    	bool 				_signed_status;
    	int			const 	_grade_to_sign;
   		int 		const  	_grade_to_execute;
};

/*Operator*/

std::ostream	&operator<<(std::ostream &os, Form const &form);

#endif /* FORM_H */