/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:46:39 by mfeldman          #+#    #+#             */
/*   Updated: 2024/01/25 09:38:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	
	std::cout << a.get_raw_bits() << std::endl;
	std::cout << b.get_raw_bits() << std::endl;
	std::cout << c.get_raw_bits() << std::endl;

	return (0);
}
