/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:08:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/07 13:35:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	try
	{
		if (argc != 2)
			throw (std::invalid_argument("Error: Need at least 1 argument"));
			
		std::string lit = argv[1];
   		ScalarConverter::convert(lit);
		ScalarConverter::convert("0");
    	ScalarConverter::convert("3.14f");
    	ScalarConverter::convert("3.14");
    	ScalarConverter::convert("a");
    	ScalarConverter::convert("-128");
    	ScalarConverter::convert("999999999");
		ScalarConverter::convert("42");
    	ScalarConverter::convert("3.14f5");
    	ScalarConverter::convert("3.14d");
    	ScalarConverter::convert("-inf");
    	ScalarConverter::convert("+inf");
		ScalarConverter::convert("+inff");
		ScalarConverter::convert("-inff");
    	ScalarConverter::convert("nan");
		ScalarConverter::convert("nanf");
		
	}
	catch (std::exception &e)
	{std::cerr << e.what() << std::endl;}
		
    return (EXIT_SUCCESS);
}