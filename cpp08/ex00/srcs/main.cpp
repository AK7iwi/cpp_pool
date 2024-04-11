/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:33:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/12 00:32:55 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int	main()
{
	std::cout << "vector<int> = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]"  << std::endl;
	
	std::vector<int> vec;
	for (int i = 0; i <= 10; i++)
		vec.push_back(i);
	
	try 
	{
		std::cout << "\nSearch 0"  << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 0);
		std::cout  << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e) 
	{std::cout << e.what() << std::endl;}

	try 
	{
		std::cout << "\nSearch 5"  << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e)
	{std::cout  << e.what() << std::endl;}

	try 
	{
			std::cout << "\nSearch 10" << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 10);
			std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it)  << std::endl;
	} 
	catch (std::exception &e) 
	{std::cout  << e.what() << std::endl;}
		
	try 
	{
			std::cout << "\nSearch 20" << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 20);
			std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	
	return (0);
}