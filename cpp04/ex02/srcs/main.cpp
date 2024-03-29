/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/03/29 14:06:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "Constructor" << std::endl << std::endl;

	const AAnimal *animalArr[4];
	
	for (uint8_t i = 0; i < 4; i++) 
	{
		if (i < 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
	}
	std::cout << std::endl << "Destructor" << std::endl << std::endl;
	for (uint8_t i = 0; i < 4; i++)
	{
		animalArr[i]->make_sound();
		delete (animalArr[i]);
	}
		
	std::cout << std::endl << "Deep copy" << std::endl << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
		
		basic.get_brain()->set_ideas(0, "basic");
		tmp.get_brain()->set_ideas(0, "tmp");

		std::cout << basic.get_brain()->get_ideas(0) << std::endl;
		std::cout << tmp.get_brain()->get_ideas(0) << std::endl;
	}
	std::cout << basic.get_brain()->get_ideas(0) << std::endl;
	
	return (0);
}