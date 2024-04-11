/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:10:49 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 21:43:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
    	Array() : _elements(nullptr), _array_size(0) {}

    	Array(unsigned int n) : _array_size(n) 
		{
        	_elements = new T[_array_size];
        	for (unsigned int i = 0; i < _array_size; ++i)
            	_elements[i] = T();
    	}

    	Array(Array const &cpy) : _array_size(cpy._array_size) 
		{
        	_elements = new T[_array_size];
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

    	T& operator[](unsigned int index) 
		{
        	if (index >= _array_size)
            	throw std::out_of_range("Index out of bounds"); //exception
        	return (elements[index]);
    	}

    	unsigned int size() const
		{return arraySize;}

	private:
    	T* _elements;
 		unsigned int _array_size;
};