/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:10:49 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/24 14:50:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <stdlib.h>

template<typename T>
class Array
{
	public:
	/* Constructors & operators */
	
    	Array() : 
			_elements(new T[0]), 
			_array_size(0) {}

    	Array(unsigned int n) : 
			_elements(new T[n]), 
			_array_size(n) 
		{
        	for (unsigned int i = 0; i < _array_size; ++i)
            	_elements[i] = T();
    	}

    	Array(Array const &cpy) : 
			_elements(new T[cpy._array_size]), 
			_array_size(cpy._array_size) 
		{
        	for (unsigned int i = 0; i < _array_size; ++i)
            	_elements[i] = cpy._elements[i];
        }

    	~Array() 
		{delete[] _elements;}

   		Array& operator=(Array const &rhs) 
		{
        	if (this != &rhs) 
			{
            	delete[] _elements;
            	_array_size = rhs._array_size;
	            _elements = new T[_array_size];
    	        for (unsigned int i = 0; i < _array_size; ++i)
         	       _elements[i] = rhs._elements[i];
        	}
			
        	return (*this);
    	}

    	T& operator[](unsigned int index) const
		{
        	if (index >= _array_size)
            	throw (std::out_of_range("Index out of bounds"));
				
        	return (_elements[index]);
    	}

		/* Size method */

    	unsigned int inline size() const
		{return _array_size;}

	private:
    	T*				_elements;
 		unsigned int	_array_size;
};

#endif /* ARRAY_HPP */