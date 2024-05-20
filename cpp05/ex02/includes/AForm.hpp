/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 06:00:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/20 14:57:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <stdint.h>

class Bureaucrat;

class AForm 
{
	public:
		/*Constructors & operators*/
	
		AForm(std::string const name, int const grade_to_sign, int const grade_to_execute);
		AForm(AForm const &cpy);
		virtual ~AForm();
		AForm& operator=(AForm const &rhs);

		/*Satus methods*/
		
		virtual void 	execute(Bureaucrat const &bureaucrat) const = 0;
		void			be_signed(Bureaucrat const &bureaucrat);
		
		/*Getters*/
		
		std::string		get_name()				const;
		uint8_t	inline 	get_signed_status()		const;
		uint8_t	inline 	get_grade_to_sign() 	const;
		uint8_t	inline	get_grade_to_execute()	const;

		/*Exceptions*/

		class grade_too_high_exception : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class grade_too_low_exception : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class form_is_not_signed : public std::exception 
		{
			public:
				const char* what() const throw();
		};
	
	private:
    	std::string	const 	_name;
    	bool 				_signed_status;
    	int			const 	_grade_to_sign;
   		int 		const  	_grade_to_execute;
};

/*Operator*/

std::ostream	&operator<<(std::ostream &os, AForm const &form);

#endif /* AFORM_H */