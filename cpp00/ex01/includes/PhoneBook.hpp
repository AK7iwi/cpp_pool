/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:25 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/04 20:42:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iomanip>
#include "Contact.hpp"
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>

class PhoneBook 
{
	public:
		PhoneBook();
		PhoneBook(PhoneBook const &cpy);
		~PhoneBook();
		PhoneBook& operator=(PhoneBook const &rhs);

    	void	add_contact();
    	void	search_contact();
	
	private:
		Contact	_contacts[8];
		uint8_t	_current_contact;
		bool	_flag;
};
