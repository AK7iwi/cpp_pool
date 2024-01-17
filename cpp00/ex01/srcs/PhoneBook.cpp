/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:20 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 15:36:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _current_contact(0), _flag(false) {}

PhoneBook::PhoneBook(const PhoneBook &cpy)
{
	uint8_t i = 0;
	_current_contact = cpy._current_contact;
	_flag = cpy._flag;
	while(i < 8)
	{
		_contacts[i] = cpy._contacts[i];
		i++;
	}
}

PhoneBook::~PhoneBook() {}

PhoneBook &PhoneBook::operator=(const PhoneBook &rhs) 
{	
	uint8_t i = 0;
	if (this != &rhs)
	{
		_current_contact = rhs._current_contact;
		_flag = rhs._flag;
		while(i < 8)
		{
			_contacts[i] = rhs._contacts[i];
			i++;
		}
	}
	return (*this);
}


void	PhoneBook::add_contact() 
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

void	PhoneBook::search_contact()
{
    if (_current_contact == 0)
	{
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
	else if (_current_contact == 8)
		_flag = true;
	
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" 
			  << std::endl;
	
	if (_flag == true)
	{
		for (int i = 0; i < 8; ++i)
    		_contacts[i].display_phonebook(i);
	}
	else
	{
		for (int i = 0; i < _current_contact; ++i)
    		_contacts[i].display_phonebook(i);
	}
	
    std::cout << "Enter the index of the contact to display: ";
	std::string input;
	std::cin >> input;
	int index = std::atoi(input.c_str());
	
	if (((index >= 0 && index < _current_contact) || (_flag && index <= 7)) 
		&& (std::isdigit(input[0])) && (std::strlen(input.c_str()) == 1))
	{
        std::cout << "Contact Information:" << "\n" << std::endl;
        _contacts[index].display_contact(index);
    }
	else
        std::cout << "Invalid index. Contact not found." << std::endl;
}