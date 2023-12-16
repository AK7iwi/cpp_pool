/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/16 14:50:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{
	private:
		static const int maxContacts = 8;
		Contact contacts[maxContacts];
		int currentContacts;
	
	public:
    	PhoneBook() : currentContacts(0) {} // Constructor

    // Function to add a new contact to the phonebook
    	void addContact();

    // Function to search and display a contact from the phonebook
    	void searchContact() const;
};

#endif