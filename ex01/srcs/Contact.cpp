/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:14 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/16 23:40:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(const Contact &cpy) {

	_firstName = cpy._firstName;
	_lastName = cpy._lastName;
	_nickname = cpy._nickname;
	_phoneNumber = cpy._phoneNumber;
	_darkestSecret = cpy._darkestSecret;
}

Contact	&Contact::operator=(const Contact &rhs) {
	
	if (this != &rhs) {
		_firstName = rhs._firstName;
		_lastName = rhs._lastName;
		_nickname = rhs._nickname;
		_phoneNumber = rhs._phoneNumber;
		_darkestSecret = rhs._darkestSecret;
	}
	return (*this);
}

Contact::~Contact() {}

void Contact::setContactInfo()
{
    std::cout << "Enter first name: ";
	// std::cin >> firstName;
    std::getline(std::cin, _firstName);

    std::cout << "Enter last name: ";
	// std::cin >> lastName;
    std::getline(std::cin, _lastName);

    std::cout << "Enter nickname: ";
	// std::cin >> nickname;
    std::getline(std::cin, _nickname);

    std::cout << "Enter phone number: ";
	// std::cin >> phoneNumber;
    std::getline(std::cin, _phoneNumber);

    std::cout << "Enter darkest secret: ";
	// std::cin >> darkestSecret;
    std::getline(std::cin, _darkestSecret);
}

void Contact::displayContact(int index) const 
{
    std::cout	<< "|"
				<< std::setw(10) << index << "|"
            	<< std::setw(10) << (_firstName.length() > 10 ? _firstName.substr(0, 9) + "." : _firstName) << "|"
            	<< std::setw(10) << (_lastName.length() > 10 ? _lastName.substr(0, 9) + "." : _lastName) << "|"
            	<< std::setw(10) << (_nickname.length() > 10 ? _nickname.substr(0, 9) + "." : _nickname) << "|"
				<< std::endl;
}
