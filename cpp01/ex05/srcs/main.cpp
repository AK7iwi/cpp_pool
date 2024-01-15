/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:52:47 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/15 13:09:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	std::cout << std::endl;
	
	harl.complain("INFO");
	std::cout << std::endl;
	
	harl.complain("WARNING");
	std::cout << std::endl;
	
	harl.complain("ERROR");
	std::cout << std::endl;
}