/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:19:53 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/13 14:55:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.add_number(6);
	sp.add_number(3);
	sp.add_number(17);
	sp.add_number(9);
	sp.add_number(11);
	
	std::cout << sp.shortest_span() << std::endl;
	std::cout << sp.longest_span() << std::endl;

	return (0);
}
	