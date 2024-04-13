/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:37:47 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/12 00:58:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	Base *base = NULL;

	srand(time(NULL));
	int random_number = rand() % 3;
	std::cout << "Random number: " << random_number << std::endl;

	switch (random_number)
	{
	case 0:
		std::cout << "Creation: A" << std::endl;
		base = new (A);
		break;
	case 1:
		std::cout << "Creation: B" << std::endl;
		base = new (B);
		break;
	case 2:
		std::cout << "Creation: C" << std::endl;
		base = new (C);
		break;
	}
	return (base);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Identify(Base *p): A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identify(Base *p): B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identify(Base *p): C" << std::endl;
	else
		std::cout << "Identify(Base *p): NULL" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Identify(Base &p): A" << std::endl;
		return;
	} 
	catch(const std::exception &e) {}
	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout <<"Identify(Base &p): B" << std::endl;
		return;
	} 
	catch(const std::exception &e) {}
	
	try 
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Identify(Base &p): C" << std::endl;
		return;
	} 
	catch(const std::exception &e)
	{std::cout  << "Identify(Base &p): NULL" << std::endl; }
}

int main() 
{
	Base *new_base = generate();
	identify(new_base);
	identify(*new_base);
	delete (new_base);
    
	new_base = NULL;

  	identify(new_base);
 	return (0);
}