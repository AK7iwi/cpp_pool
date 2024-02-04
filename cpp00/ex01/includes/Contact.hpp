/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:23 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 16:01:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact 
{
    public:
		Contact();
		Contact(Contact const &cpy);
		~Contact();
		Contact& operator=(Contact const &rhs);

    	void	set_contact_info();
    	void	display_phonebook(uint8_t index) const;
		void	display_contact(uint8_t index) const;
		
	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};
