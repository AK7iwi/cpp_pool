/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/01 18:04:51 by mfeldman         ###   ########.fr       */
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
		Dog&	operator=(Dog const &rhs);

		void	make_sound(void) const;
};