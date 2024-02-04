/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:17 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 14:17:48 by mfeldman         ###   ########.fr       */
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
        
		if (command == "ADD")
            phone_book.add_contact();
		else if (command == "SEARCH")
            phone_book.search_contact();
        else if (command == "EXIT")
        {
            std::cout << "Exiting phonebook. Goodbye!" << std::endl; 
            break;
        }
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
    }
	return (0);
}