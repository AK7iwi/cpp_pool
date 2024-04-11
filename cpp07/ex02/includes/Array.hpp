/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:10:49 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 23:27:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
    	Array() : _elements(new T[0]), _array_size(0) {}

    	Array(unsigned int n) : _elements(new T[n]),  _array_size(n) 
		{
        	for (unsigned int i = 0; i < _array_size; ++i)
            	_elements[i] = T();
    	}

    	Array(Array const &cpy) : _elements(new T[cpy._array_size]), _array_size(cpy._array_size) 
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

    	T& operator[](unsigned int index) 
		{
        	if (index >= _array_size)
            	throw(invalid_index());
        	return (_elements[index]);
    	}

    	unsigned int size() const
		{return _array_size;}

		class invalid_index : public std::exception 
		{
			const char *what() const throw() 
			{return ("Invalid Index");}
		};

	private:
    	T* _elements;
 		unsigned int _array_size;
};