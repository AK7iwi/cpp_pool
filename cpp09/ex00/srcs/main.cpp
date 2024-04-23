/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:17:50 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/23 15:45:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc !=2)
			throw(std::out_of_range("=> Need 1 argument"));
			
		std::string filename = argv[1];
		BitcoinExchange Exchange(filename);
		Exchange.exchange();
	}
	catch(std::exception &e)
	{std::cerr << e.what() << std::endl;}

	return (0);

}