/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:09:07 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/23 17:36:14 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) 
{
  size_t         i;
  const AAnimal* animals[4];

  std::cout << std::endl;
  std::cout << "          [BIRTH]" << std::endl;
  std::cout << std::endl;

  for( i = 0; i < 4; ++i ) {
    if( i < 2 ) {
      animals[i] = new Cat();
    } else {
      animals[i] = new Dog();
    }
    std::cout << std::endl;
  }

  std::cout << "          [LIVE]" << std::endl;
  std::cout << std::endl;

  for( i = 0; i < 4; ++i ) {
    std::cout << "AAnimal nᵒ" << i << ", a " << *animals[i] << " says: ";
    animals[i]->makeSound();
  }

  std::cout << std::endl;
  std::cout << "          [DEATH]" << std::endl;
  std::cout << std::endl;

  for( i = 0; i < 4; ++i ) {
    delete animals[i];
    std::cout << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Copy assignment operator and copy constructors" << std::endl;
  std::cout << std::endl;
  Cat* a = new Cat();
  Cat* b = new Cat();
  Cat* c = new Cat( *b );
  std::cout << std::endl;
  *b = *a = *c;
  std::cout << std::endl;
  
  delete a;
  delete b;
  delete c;
  return 0;
}
