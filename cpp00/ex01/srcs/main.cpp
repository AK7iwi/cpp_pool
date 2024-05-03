/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 16:56:06 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main() 
{
    PhoneBook	phone_book;
    std::string command;

    while (true) 
	{	
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

		//protect cin from ctrl + D
		if (command == "ADD")
            phone_book.add_contact();
		else if (command == "SEARCH")
            phone_book.search_contact();
        else if (command == "EXIT")
        {
            std::cout << "Exiting phonebook. Goodbye!" << std::endl; 
            break ;
        }
        else
            std::cerr << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
	return (EXIT_SUCCESS);
}