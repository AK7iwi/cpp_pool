/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:19:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 19:30:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "Size 0: "  << std::endl;
		
		Span sp0 = Span(0);
		
		sp0.add_number(6);
		sp0.add_number(3);

		std::cout << "Shortest span: " <<sp0.shortest_span() << std::endl;
		std::cout << "Longest span: " << sp0.longest_span() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl << std::endl;}

	try
	{
		std::cout << "Size 1: "  << std::endl;

		Span sp1 = Span(1);
		
		sp1.add_number(6);
		sp1.add_number(3);
	
		std::cout << "Shortest span: " <<sp1.shortest_span() << std::endl;
		std::cout  << "Longest span: " << sp1.longest_span() << std::endl << std::endl; 
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl << std::endl;}

	try
	{
		std::cout << "Size 5: "  << std::endl;
		
		Span sp5 = Span(5);
		
		sp5.add_number(6);
		sp5.add_number(3);
		sp5.add_number(17);
		sp5.add_number(9);
		sp5.add_number(11);
		
		std::cout << "Shortest span: " <<sp5.shortest_span() << std::endl;
		std::cout  << "Longest span: " << sp5.longest_span() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl << std::endl;}
	
	try
	{
		std::cout << "Size 5 but try to add 6 numbers: "  << std::endl;
		
		Span sp6 = Span(5);
		
		sp6.add_number(6);
		sp6.add_number(3);
		sp6.add_number(17);
		sp6.add_number(9);
		sp6.add_number(11);
		sp6.add_number(155);
	
		std::cout << "Shortest span: " <<sp6.shortest_span() << std::endl;
		std::cout  << "Longest span: "<< sp6.longest_span() << std::endl << std::endl;
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl << std::endl;}

	try
	{
		std::cout << "Size 5 but try to calculate before adding numbers: "  << std::endl;
		
		Span sp7 = Span(5);
		
		std::cout << "Shortest span: " <<sp7.shortest_span() << std::endl;
		std::cout  << "Longest span: " << sp7.longest_span() << std::endl << std::endl;
		
		sp7.add_number(6);
		sp7.add_number(3);
		sp7.add_number(17);
		sp7.add_number(9);
		sp7.add_number(11);
		
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl << std::endl;}

	try
	{
		std::cout << "Size 10000: "  << std::endl;
		
		int lim = 10000;
		Span splim = Span(lim);

		std::srand(time(NULL));
		int rand = std::rand();
		
		for (int i = 1; i < lim; i++) 
			splim.add_number(rand / i);
	
		std::cout << "Shortest span: " <<splim.shortest_span() << std::endl;
		std::cout  << "Longest span: "<< splim.longest_span() << std::endl;
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl;}

	return (EXIT_SUCCESS);
}
	