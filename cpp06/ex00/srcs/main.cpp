/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:08:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 00:41:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
	if (argc != 2)
		return (std::cout << "Need one argument" << std::endl, 1);
	std::string lit = argv[1];
    ScalarConverter::convert(lit);
	ScalarConverter::convert("0");
    ScalarConverter::convert("3.14f");
    ScalarConverter::convert("3.14");
    ScalarConverter::convert("a");
    ScalarConverter::convert("-128");
    ScalarConverter::convert("999999999");

	// ScalarConverter::convert("42");
    // ScalarConverter::convert("3.14f5");
    // ScalarConverter::convert("3.14d");
    // ScalarConverter::convert("a");
    // ScalarConverter::convert("-128");
    // ScalarConverter::convert("999999999");
    // ScalarConverter::convert("-inf");
    // ScalarConverter::convert("+inf");
    // ScalarConverter::convert("nan");

    return (0);
}