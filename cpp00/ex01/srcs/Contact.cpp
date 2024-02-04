/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:14 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:12:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(Contact const &cpy)
{
	_first_name = cpy._first_name;
	_last_name = cpy._last_name;
	_nickname = cpy._nickname;
	_phone_number = cpy._phone_number;
	_darkest_secret = cpy._darkest_secret;
}

Contact::~Contact() {}

Contact& Contact::operator=(Contact const &rhs)
{	
	if (this != &rhs)
	{
		_first_name = rhs._first_name;
		_last_name = rhs._last_name;
		_nickname = rhs._nickname;
		_phone_number = rhs._phone_number;
		_darkest_secret = rhs._darkest_secret;
	}
	return (*this);
}

void	Contact::set_contact_info()
{
	std::cout << "Enter first name: ";
	std::cin >> _first_name;

    std::cout << "Enter last name: ";
	std::cin >> _last_name;

    std::cout << "Enter nickname: ";
	std::cin >> _nickname;

    std::cout << "Enter phone number: ";
	std::cin >> _phone_number;

    std::cout << "Enter darkest secret: ";
	std::cin >> _darkest_secret;
}

void	Contact::display_phonebook(int index) const 
{
    std::cout << "|"
			  << std::setw(10) << index << "|"
			  << std::setw(10) << (_first_name.length() > 10 ? _first_name.substr(0, 9) + "." : _first_name) << "|"
			  << std::setw(10) << (_last_name.length() > 10 ? _last_name.substr(0, 9) + "." : _last_name) << "|"
			  << std::setw(10) << (_nickname.length() > 10 ? _nickname.substr(0, 9) + "." : _nickname) << "|"
			  << std::endl;
}

void	Contact::display_contact(int index) const 
{
    std::cout << "Index: " << index << "\n"
			  << "First Name: " << _first_name << "\n"
			  << "Last Name: " << _last_name << "\n"
			  << "Nickname: " << _nickname << "\n"
			  << "Phone Number: " << _phone_number << "\n"
			  << "Darkest Secret: " << _darkest_secret << "\n"
			  << std::endl;
}
