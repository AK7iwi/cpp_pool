/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:20:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/28 18:52:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Constructors & operators */

Span::Span(unsigned int const size)
{
	 if (size <= 1) 
        throw (std::out_of_range("Not enough numbers to calculate span"));
		
	_N = size;
}

Span::Span(Span const &cpy) : //bad cpy const
	_N(cpy._N), 
	_numbers(cpy._numbers) {}

Span::~Span() {}

Span&	Span::operator=(Span const &rhs) //bad assignator 
{	
	if (this != &rhs)
	{
		_N = rhs._N;
		_numbers = rhs._numbers;
	}
	
	return (*this);
}

/* Add method */

void Span::add_number(int const num) 
{	
    if (_numbers.size() >= _N)
        throw (std::length_error("Span is full"));
		
    _numbers.push_back(num);
}

/* Span method */

int Span::shortest_span() const 
{
	 if (_numbers.size() <= 1)
        throw (std::invalid_argument("Not enough numbers to calculate span"));
		
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int min_span = sorted[1] - sorted[0];
    for (size_t i = 0; i < sorted.size(); ++i) 
	{
        int span = sorted[i] - sorted[i - 1];
        if (span < min_span)
            min_span = span;
    }
	
    return (min_span);
}

int Span::longest_span() const 
{
	if (_numbers.size() <= 1)
        throw (std::invalid_argument("Not enough numbers to calculate span"));
		
	return (*std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end()));
}