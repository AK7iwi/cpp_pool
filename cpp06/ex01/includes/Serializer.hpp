/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:16:56 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/21 16:55:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

#define uintptr_t unsigned long

struct Data
{
	int			data_int;
	double 		data_double;
	std::string data_str;
};

class Serializer
{
	public:
		Serializer();
		Serializer(Serializer const &cpy);
		~Serializer();
		Serializer& operator=(Serializer const &rhs);
		
		static uintptr_t	serialize(Data const *ptr);
		static Data*		deserialize(uintptr_t const raw);
};

#endif /*SERIALIZER_HPP*/