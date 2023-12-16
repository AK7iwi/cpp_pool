/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/16 23:34:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{
	public:
		PhoneBook();
		virtual ~PhoneBook();

    	// Function to add a new contact to the phonebook
    	void addContact();

    	// Function to search and display a contact from the phonebook
    	void searchContact() const;
	
	private:
		Contact contacts[8];
		int		currentContact;
};
