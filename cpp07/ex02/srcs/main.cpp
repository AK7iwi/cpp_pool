/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:10:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 23:26:27 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() 
{
	try 
	{
        // Testing default constructor
        Array<int> empty_array;
        std::cout << "Size of emptyArray: " << empty_array.size() << std::endl;

        // Testing constructor with size parameter
        Array<int> int_array(5);
        for (unsigned int i = 0; i < int_array.size(); ++i)
            int_array[i] = i + 1;

        // Testing copy constructor and assignment operator
        Array<int> copied_array(int_array);
        Array<int> assigned_array;
        assigned_array = int_array;

        // Modifying original array
        int_array[0] = 100;

        // Displaying elements of copied and assigned arrays
        std::cout << "Copied array elements: ";
        for (unsigned int i = 0; i < copied_array.size(); ++i)
            std::cout << copied_array[i] << " ";
        std::cout << std::endl;

        std::cout << "Assigned array elements: ";
        for (unsigned int i = 0; i < assigned_array.size(); ++i)
            std::cout << assigned_array[i] << " ";
        std::cout << std::endl;

        // Testing out of bounds access
        std::cout << "Accessing out of bounds element: ";
        std::cout << int_array[10] << std::endl; // This should throw an exception
    } 
	catch (std::exception &e) 
	{std::cerr  << e.what() << std::endl;} 

    return (0);
}