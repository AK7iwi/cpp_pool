/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:35 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:57:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal 
{
	public:
    	Cat();
        Cat(Cat const &cpy);
        virtual ~Cat();
		Cat& operator=(Cat const &rhs);

		void	make_sound(void) const;
};

