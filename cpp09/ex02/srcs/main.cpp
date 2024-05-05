/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:08 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/05 20:03:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cerr << "Need at least one argument" << std::endl, EXIT_FAILURE);
		
	PmergeMe to_merge;
	to_merge.sort(argv);
	
	return (EXIT_SUCCESS);
}