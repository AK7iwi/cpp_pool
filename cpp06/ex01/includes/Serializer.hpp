/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:16:56 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/22 16:12:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdlib.h>

#define uintptr_t unsigned long

/* Data */

struct Data
{
	int			data_int;
	double 		data_double;
	std::string data_str;
};

class Serializer
{
	public:
		/* Serialize method */
		
		static uintptr_t serialize(Data const *ptr);

		/* Deserialize method */
		
		static Data*	deserialize(uintptr_t raw);

	private:
		/* Constructors & operators */
		
		Serializer();
		Serializer(Serializer const &cpy);
		~Serializer();
		Serializer& operator=(Serializer const &rhs);	
};

#endif /*SERIALIZER_HPP*/