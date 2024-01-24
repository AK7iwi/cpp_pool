/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/24 10:05:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const Animal *bear = new Animal("Bear");
	const WrongAnimal *wrong1 = new WrongAnimal();
	const WrongAnimal *wrong2 = new WrongCat();
	WrongCat Chat;
		
	std::cout << "no_type:" << animal->getType() << std::endl;
	std::cout << "no_type:" << wrong1->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << bear->getType() << std::endl;
	std::cout << wrong2->getType() << std::endl << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	bear->makeSound();
	wrong1->makeSound();
	wrong2->makeSound();
	Chat.makeSound();

	delete animal;
	delete dog;
	delete cat;
	delete bear;
	delete wrong1;
	delete wrong2;	
}