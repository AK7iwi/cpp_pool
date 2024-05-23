/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:49:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/23 14:09:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main() 
{
	/* Simple test */
	
	int a = 2, b = 3;
		
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "Max(a, b) = " << ::max(a, b) << std::endl;

	/* Same value test */
	
	int c = 4, d = 4;
		
	std::cout << "\nBefore swap: c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "Max(c, d) = " << ::max(c, d) << std::endl;

	/* Double value test */

	double e = 4.1, f = 4.2;
		
	std::cout << "\nBefore swap: e = " << e << ", f = " << f << std::endl;
	swap(e, f);
	std::cout << "After swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "Min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "Max(e, f) = " << ::max(e, f) << std::endl;

	/* Float value test */
	
	float g = 4.1f, h = 4.2f;
		
	std::cout << "\nBefore swap: g = " << g << ", h = " << h << std::endl;
	swap(g, h);
	std::cout << "After swap: g = " << g << ", h = " << h << std::endl;
	std::cout << "Min(g, h) = " << ::min(g, h) << std::endl;
	std::cout << "Max(g, h) = " << ::max(g, h) << std::endl;
	
	/* String value test */
	std::string i = "Chaine1", j = "Chaine2";
	
	std::cout << "\nBefore swap: i = " << i << ", j = " << j << std::endl;
	swap(i, j);
	std::cout << "After swap: i = " << i << ", j = " << j << std::endl;
	std::cout << "Min(i, j) = " << ::min(i, j) << std::endl;
	std::cout << "Max(i, j) = " << ::max(i, j) << std::endl;
	
	return (EXIT_SUCCESS);
}