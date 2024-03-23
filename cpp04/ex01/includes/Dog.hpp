/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/23 21:08:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
	public:
    	Dog();
        Dog(Dog const &cpy);
        ~Dog();
		Dog& operator=(Dog const &rhs);

		void	make_sound() const;
		Brain	*get_brain() const;

	private:
  		Brain* _brain;
};