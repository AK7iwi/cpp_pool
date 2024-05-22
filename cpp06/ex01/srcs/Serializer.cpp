/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:17:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/22 14:17:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/* Constructors & operators */

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &cpy) 
{*this = cpy;}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(Serializer const &rhs)
{
	(void)rhs;
	return (*this);
}

/* Serialize method */

uintptr_t Serializer::serialize(Data const *ptr)
{return (reinterpret_cast<uintptr_t>(ptr));}

/* Deserialize method */

Data *Serializer::deserialize(uintptr_t raw)
{return (reinterpret_cast<Data*>(raw));}