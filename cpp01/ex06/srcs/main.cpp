/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/18 18:59:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid level or to much paramaters" << std::endl;
		return (0);
	}
	Harl harl;
	uint8_t level;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
			level = i + 1;	
	}
	switch(level)
	{
		case 1:
			harl._debug();
			break;
		case 2:
			harl._info();
			break;
		case 3:
			harl._warning();
			break;
		case 4:
			harl._error();
			break;
		default:
    		std::cout << "Invalid level" << std::endl;
			break;
	}
}
