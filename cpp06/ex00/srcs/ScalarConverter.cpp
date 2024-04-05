/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/05 22:02:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

# include <iostream>
# include <string>
# include <cstdlib>
# include <cfloat>
# include <sstream>
# include <iomanip>
# include <cmath>


class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &rhs);

		static void convert(std::string input);
		
	private:
};