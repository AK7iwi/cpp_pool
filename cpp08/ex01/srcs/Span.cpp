/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:20:13 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/13 16:12:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : _N(size) {}

Span::Span(Span const &cpy) : 
	_N(cpy._N) {}

Span::~Span() {}

Span&	Span::operator=(Span const &rhs) 
{	
	if (this != &rhs)
		_N = rhs._N;
	return (*this);
}

void Span::add_number(int num) 
{
    if (_numbers.size() >= _N)
        throw (std::out_of_range("Span is full"));
    _numbers.push_back(num);
}

int Span::shortest_span() const 
{
    if (_numbers.size() <= 1) // in the constructor
        throw (std::runtime_error("Not enough numbers to calculate span"));

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int min_span = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); ++i) 
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
        throw (std::runtime_error("Not enough numbers to calculate span"));

    return (*std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end()));
}