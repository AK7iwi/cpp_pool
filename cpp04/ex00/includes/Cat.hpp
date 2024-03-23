/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:35 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:05:51 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal 
{
	public:
    	Cat();
        Cat(Cat const &cpy);
        ~Cat();
		Cat& operator=(Cat const &rhs);

		void	make_sound() const;
};

