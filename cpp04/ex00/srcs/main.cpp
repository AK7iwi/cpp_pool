/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 17:17:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
  const Animal* animal = new Animal(); 
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();

  std::cout << std::endl;
  std::cout << animal->getType() << " " << std::endl;
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;
  std::cout << std::endl;
  animal->makeSound();  
  dog->makeSound();     
  cat->makeSound();    
  std::cout << std::endl;

  delete animal;
  delete dog;
  delete cat;

  const WrongAnimal* wrongAnimal = new WrongAnimal();
  const WrongAnimal* wrongCat = new WrongCat();
  WrongCat wc;

  std::cout << std::endl;
  std::cout << wrongAnimal->getType() << " " << std::endl;
  std::cout << wrongCat->getType() << " " << std::endl;
  std::cout << wc.getType() << " " << std::endl;
  std::cout << std::endl;
  wrongAnimal->makeSound();
  wrongCat->makeSound();   
  wc.makeSound();           
  std::cout << std::endl;

  delete wrongAnimal;
  delete wrongCat;
}