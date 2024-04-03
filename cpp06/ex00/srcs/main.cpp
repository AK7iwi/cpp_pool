/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 07:08:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/03 07:20:38 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv) 
{
	if (argc != 2) 
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	try 
	{
		ScalarConverter a(argv[1]);
		a.convert();
	} 
	catch(std::exception &err) 
	{
		std::cout << err.what() << std::endl;
	}
	return (0);
}