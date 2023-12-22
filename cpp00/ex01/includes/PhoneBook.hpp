/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:25 by mfeldman          #+#    #+#             */
/*   Updated: 2023/12/22 13:58:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include <stdint.h>
#include <cmath>
#include "Contact.hpp"

class PhoneBook 
{
	public:
		
		PhoneBook();
		PhoneBook(const PhoneBook &cpy);
		PhoneBook &operator=(const PhoneBook &rhs);
		virtual ~PhoneBook();

    	void add_contact();
    	void search_contact();
	
	private:
		Contact _contacts[8];
		uint8_t	_current_contact;
		bool 	flag;
};
