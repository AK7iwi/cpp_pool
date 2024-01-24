/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:10:55 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/24 10:08:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
    	WrongCat();
        WrongCat(WrongCat const &cpy);
        virtual ~WrongCat();
		WrongCat&	operator=(WrongCat const &rhs);

		void	makeSound(void) const;
};