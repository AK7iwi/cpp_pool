/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:35 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/13 18:21:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int main() 
{
    MutantStack<int> mutant_stack;

    for (int i = 0; i < 10; ++i)
        mutant_stack.push(i * 2);

    std::cout << "MutantStack contents: ";
    for (MutantStack<int>::iterator it = mutant_stack.begin(); it != mutant_stack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return (0);
}