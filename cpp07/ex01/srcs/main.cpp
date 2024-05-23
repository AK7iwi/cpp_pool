/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:03:33 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/23 14:49:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main() 
{
    int int_array[] = {1, 2, 3, 4, 5};
    size_t int_array_length = sizeof(int_array) / sizeof(1);

    std::cout << "Printing intArray elements: " << std::endl;
    iter(int_array, int_array_length, print_element<int>);
    std::cout << std::endl;

    double double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t double_array_length = sizeof(double_array) /  sizeof(1.0);

    std::cout << "Printing doubleArray elements: " << std::endl;
    iter(double_array, double_array_length, print_element<double>);

    return (EXIT_SUCCESS);
}