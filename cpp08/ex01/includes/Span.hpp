/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:20:19 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/24 17:07:30 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdexcept>

class Span 
{
	public:
		/* Constructors & operators */
		
    	Span(unsigned int const size);
		Span(Span const &cpy);
		~Span();
		Span& operator=(Span const &rhs);
		
		/* Add method */

    	void add_number(int const num);

		/* Span method */
		
    	int shortest_span() const;
    	int longest_span() const;
	
	private:
    	unsigned int _N;
    	std::vector<int> _numbers;
};

#endif /* SPAN_HPP */