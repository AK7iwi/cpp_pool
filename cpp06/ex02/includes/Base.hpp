/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 06:37:40 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/22 14:09:45 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
	public:
		/* Destructor */
		
		virtual ~Base();
};

/* Inherited method */

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif /*BASE_HPP*/