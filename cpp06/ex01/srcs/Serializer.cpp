/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:17:11 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 21:48:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &cpy) 
{(void)cpy;}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer &rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{return (reinterpret_cast<uintptr_t>(ptr));}

Data *Serializer::deserialize(uintptr_t raw)
{return (reinterpret_cast<Data*>(raw));}