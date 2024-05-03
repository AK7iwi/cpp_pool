/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:45:22 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/03 20:29:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() 
{
	Fixed 		a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.to_int() << " as integer" << std::endl;
	std::cout << "b is " << b.to_int() << " as integer" << std::endl;
	std::cout << "c is " << c.to_int() << " as integer" << std::endl;
	std::cout << "d is " << d.to_int() << " as integer" << std::endl;

	std::cout << "a is " << a.to_float() << " as float" << std::endl;
	std::cout << "b is " << b.to_float() << " as float" << std::endl;
	std::cout << "c is " << c.to_float() << " as float" << std::endl;
	std::cout << "d is " << d.to_float() << " as float" << std::endl;
	
	return (EXIT_SUCCESS);
}
