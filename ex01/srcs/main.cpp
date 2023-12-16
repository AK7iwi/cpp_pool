/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:17 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/16 23:55:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() 
{
    PhoneBook	phoneBook;
    std::string command;

    while (001) {
		
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        
		if (command == "ADD") 			{ phoneBook.addContact(); }
		else if (command == "SEARCH")	{ phoneBook.searchContact(); }
        else if (command == "EXIT")		{ std::cout << "Exiting phonebook. Goodbye!" << std::endl; break; }
        else							{ std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl; }
    }
}