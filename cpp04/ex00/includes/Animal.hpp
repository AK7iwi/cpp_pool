/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:37 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 10:03:15 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Animal 
{
	public:
    	Animal();
		Animal(std::string const &type);
        Animal(Animal const &cpy);
        virtual ~Animal();
		Animal&	operator=(Animal const &rhs);

		virtual void	make_sound(void) const;
		std::string		get_type() const;

	protected:
    	std::string _type;
};