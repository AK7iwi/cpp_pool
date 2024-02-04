/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:57:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal 
{
	public:
    	Dog();
        Dog(Dog const &cpy);
        virtual ~Dog();
		Dog& operator=(Dog const &rhs);

		void	make_sound(void) const;
};