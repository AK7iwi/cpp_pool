/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:33:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 16:32:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int	main()
{
	std::cout << "vector<int> = [10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]" << std::endl;
	
	std::vector<int> vec;
	for (int i = 10; i <= 20; i++)
		vec.push_back(i);

	try 
	{
		std::cout << "\nSearch 10"  << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 10);
		std::cout  << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e) 
	{std::cout << e.what() << std::endl;}

	try 
	{
		std::cout << "\nSearch 15"  << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 15);
		std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e)
	{std::cout  << e.what() << std::endl;}
		
	try 
	{
		std::cout << "\nSearch 30" << std::endl;
		std::vector<int>::iterator it = easyfind(vec, 30);
		std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e) 
	{std::cout << e.what() << std::endl;}

	try 
	{
		std::cout << "\nSearch -12" << std::endl;
		std::vector<int>::iterator it = easyfind(vec, -1);
		std::cout << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << std::endl;
	} 
	catch (std::exception &e) 
	{std::cout << e.what() << std::endl;}
	
	return (0);
}