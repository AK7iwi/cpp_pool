/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:30:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/04 17:14:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <limits>
#include <climits>
#include <float.h>
#include <cstdlib>
#include <iomanip>

class ScalarConverter 
{
	public:
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter &cpy);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter &rhs);
	
		static bool		is_char(std::string input);
		static bool		is_int(std::string input);
		static bool		is_float(std::string input);
		static bool		is_double(std::string input);

		static char		to_char();
		static int		to_int();
		static float	to_float();
		static double	to_double();
		
		static void		find_type(std::string input);
		static void		convert();
	
		class empty_string : public std::exception 
		{
			const char *what() const throw();
		};

		class bad_input : public std::exception 
		{
			const char *what() const throw();
		};

		class impossible : public std::exception 
		{
			const char *what() const throw();
		};

		class non_displayable : public std::exception 
		{
			const char *what() const throw();
		};

		private:
			static char		_c;
			static int		_i;
			static float	_f;
			static double	_d;

			static bool		_nan;
			static bool		_inf;

			static double	_cast;
};