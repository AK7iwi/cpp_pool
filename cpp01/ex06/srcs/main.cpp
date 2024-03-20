/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:48:10 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/20 15:31:32 by mfeldman         ###   ########.fr       */
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

	for (uint8_t i = 0; i < 4; i++)
	{
		if (levels[i] == argv[1])
			level = i + 1;	
	}
	
	switch(level)
	{
		case 1:
			harl.debug();
			break;
		case 2:
			harl.info();
			break;
		case 3:
			harl.warning();
			break;
		case 4:
			harl.error();
			break;
		default:
    		std::cout << "Invalid level" << std::endl;
			break;
	}
	return (0);
}
