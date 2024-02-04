/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/02/04 13:55:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() 
{
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const Animal *bear = new Animal("Bear");
	const WrongAnimal *wrong1 = new WrongAnimal();
	const WrongAnimal *wrong2 = new WrongCat();
	WrongCat Chat;
		
	std::cout << "No type:" << animal->get_type() << std::endl;
	std::cout << "No type:" << wrong1->get_type() << std::endl;
	std::cout << dog->get_type() << std::endl;
	std::cout << cat->get_type() << std::endl;
	std::cout << bear->get_type() << std::endl;
	std::cout << wrong2->get_type() << std::endl << std::endl;

	animal->make_sound();
	dog->make_sound();
	cat->make_sound();
	bear->make_sound();
	wrong1->make_sound();
	wrong2->make_sound();
	Chat.make_sound();

	delete(animal);
	delete(dog);
	delete(cat);
	delete(bear);
	delete(wrong1);
	delete(wrong2);	
}