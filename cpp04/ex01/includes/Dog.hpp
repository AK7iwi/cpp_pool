/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 15:58:26 by mfeldman         ###   ########.fr       */
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
        virtual ~Dog();
		Dog& operator=(Dog const &rhs);

		Brain	*get_brain() const;
		void	make_sound(void) const;

	private:
  		Brain* _brain;
};