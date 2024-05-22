/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:08:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/22 16:17:41 by mfeldman         ###   ########.fr       */
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
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("0");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
	
	try
	{
		ScalarConverter::convert("3.14f");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("3.14");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("a");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("-128");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
	
	try
	{
		ScalarConverter::convert("999999999");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("42");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("3.14f5");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("3.14d");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("-inf");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("+inf");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("+inff");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("-inff");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
	
	try
	{
		ScalarConverter::convert("nan");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

	try
	{
		ScalarConverter::convert("nanf");
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}

    return (EXIT_SUCCESS);
}