/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 13:33:23 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/17 14:28:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact 
{
    public:
		Contact();
		Contact(const Contact &cpy);
		~Contact();
		Contact	&operator=(const Contact &rhs);

    	void	set_contact_info();
    	void	display_phonebook (int index) const;
		void	display_contact (int index) const;
		
	private:
		std::string	_first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};
