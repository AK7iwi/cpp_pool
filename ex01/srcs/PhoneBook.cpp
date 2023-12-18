/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:20 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/18 20:42:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _current_contact(0) {}

PhoneBook::PhoneBook(const PhoneBook &cpy)
{
	uint8_t i = 0;
	_current_contact = cpy._current_contact;
	while(i < 8)
	{
		_contacts[i] = cpy._contacts[i];
		i++;
	}
}

PhoneBook &PhoneBook::operator=(const PhoneBook &rhs) 
{	
	uint8_t i = 0;
	if (this != &rhs)
	{
		_current_contact = rhs._current_contact;
		while(i < 8)
		{
			_contacts[i] = rhs._contacts[i];
			i++;
		}
	}
	return (*this);
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add_contact() 
{
    if (_current_contact < 8) 
	{
        _contacts[_current_contact++].set_contact_info();
        std::cout << "Contact added successfully!" << std::endl;
    } 
	else 
	{
        std::cout << "Phonebook is full. Replacing the oldest contact." << std::endl;
        _current_contact = 0;
        _contacts[_current_contact++].set_contact_info();
        std::cout << "Contact added successfully!" << std::endl;
    }
}

void PhoneBook::search_contact() const 
{
    if (_current_contact == 0)
	{
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < _current_contact; ++i)
    	_contacts[i].display_phonebook(i);

    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (index >= 0 && index < _current_contact)
	{
        std::cout << "Contact Information:" << "\n"
				  << std::endl;
        _contacts[index].display_contact(index);
    }
	else
        std::cout << "Invalid index. Contact not found." << std::endl;
}