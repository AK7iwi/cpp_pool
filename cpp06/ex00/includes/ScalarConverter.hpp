/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:30:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/07 17:45:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstring>
# include <cstdlib>
# include <cfloat>
# include <sstream>
# include <iomanip>
# include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &cpy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &rhs);

		static void convert(std::string const &literal);
		
	private:
};