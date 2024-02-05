/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:10:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 13:10:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
	public:
    	WrongAnimal();
		WrongAnimal(std::string const &type);
        WrongAnimal(WrongAnimal const &cpy);
        virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const &rhs);

		void			make_sound() const;
		std::string		get_type() const;

	protected:
  		std::string	_type;
};