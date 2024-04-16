/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:08:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/16 20:40:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2)
		return (std::cout << "Need 1 argument" << std::endl, 1); // throw
	std::string lit = argv[1];
    ScalarConverter::convert(lit);
	std::cout << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;
    ScalarConverter::convert("3.14f");
	std::cout << std::endl;
    ScalarConverter::convert("3.14");
	std::cout << std::endl;
    ScalarConverter::convert("a");
	std::cout << std::endl;
    ScalarConverter::convert("-128");
	std::cout << std::endl;
    ScalarConverter::convert("999999999");
	std::cout << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;
    ScalarConverter::convert("3.14f5");
	std::cout << std::endl;
    ScalarConverter::convert("3.14d");
	std::cout << std::endl;
    ScalarConverter::convert("-inf");
	std::cout << std::endl;
    ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
    ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");

    return (0);
}