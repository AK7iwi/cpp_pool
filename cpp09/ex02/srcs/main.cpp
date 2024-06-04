/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:08 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/04 12:20:59 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cerr << "Need at least one argument" << std::endl, EXIT_FAILURE);
		
	PmergeMe sequence;
	sequence.sort(argv);
	
	return (EXIT_SUCCESS);
}