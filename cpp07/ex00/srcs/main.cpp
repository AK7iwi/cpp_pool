/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:49:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 19:20:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main() 
{
	int a = 2, b = 3;
		
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "Max(a, b) = " << ::max(a, b) << std::endl;
	
	std::string c = "Chaine1", d = "Chaine2";
	
	std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "Max(c, d) = " << ::max(c, d) << std::endl;
	
	return (EXIT_SUCCESS);
}