/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:17:50 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 13:38:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Need at least one argument" << std::endl, false); 
			
	std::ifstream input_file(argv[1]);
	BitcoinExchange Exchange;
	Exchange.exchange(input_file);

	return (0);

}