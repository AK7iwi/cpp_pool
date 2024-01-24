/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/24 10:17:39 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "constructor" << std::endl << std::endl;
	const AAnimal *animalArr[4];
	for (int i = 0; i < 4; i++) 
	{
		if (i < 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
	}
	std::cout << std::endl << "destructor" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
		delete animalArr[i];
		
	std::cout << std::endl << "deep copy" << std::endl << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
		
		basic.getBrain()->setIdeas(0, "basic");
		tmp.getBrain()->setIdeas(0, "tmp");

		std::cout << basic.getBrain()->getIdeas(0) << std::endl;
		std::cout << tmp.getBrain()->getIdeas(0) << std::endl;
	}
	std::cout << basic.getBrain()->getIdeas(0) << std::endl;
}