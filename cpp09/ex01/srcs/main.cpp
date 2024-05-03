/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:38 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 13:39:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Need at least one argument" << std::endl, false); 
	RPN Operation;
	Operation.calcule(argv[1]);

	return (0);
}