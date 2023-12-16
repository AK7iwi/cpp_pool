/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:20 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/16 21:16:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void ) : currentContacts(0) {}

PhoneBook::~PhoneBook( void ) {}

// Function to add a new contact to the phonebook
void PhoneBook::addContact() 
{
    if (currentContacts < 8) 
	{
        contacts[currentContacts++].setContactInfo();
        std::cout << "Contact added successfully!" << std::endl;
    } 
	else 
	{
        // Replace the oldest contact if the phonebook is full
        std::cout << "Phonebook is full. Replacing the oldest contact." << std::endl;
        currentContacts = 0;
        contacts[currentContacts++].setContactInfo();
        std::cout << "Contact added successfully!" << std::endl;
    }
}

// Function to search and display a contact from the phonebook
void PhoneBook::searchContact() const 
{
    if (currentContacts == 0) 
	{
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    // Display header
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;

    // Display contacts
    for (int i = 0; i < currentContacts; ++i)
        contacts[i].displayContact(i);

    // Prompt user for index
    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    // Display contact information
    if (index >= 0 && index < currentContacts)
	{
        std::cout << "Contact Information:" << std::endl;
        contacts[index].displayContact(index);
    }
	else
        std::cout << "Invalid index. Contact not found." << std::endl;
}