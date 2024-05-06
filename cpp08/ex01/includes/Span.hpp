/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:20:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/05 22:01:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class Span 
{
	public:
    	Span(unsigned int size);
		Span(Span const &cpy);
		~Span();
		Span& operator=(Span const &rhs);
		
    	void add_number(int num);
    	int shortest_span() const;
    	int longest_span() const;
	
	private:
    	unsigned int _N; //const?
    	std::vector<int> _numbers;
};
