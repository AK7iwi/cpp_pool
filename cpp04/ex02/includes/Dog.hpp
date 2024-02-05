/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:58:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/05 13:11:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal 
{
	public:
    	Dog();
        Dog(Dog const &cpy);
        virtual ~Dog();
		Dog& operator=(Dog const &rhs);

		void	make_sound() const;
		Brain	*get_brain() const;

	private:
  		Brain*	_brain;
};