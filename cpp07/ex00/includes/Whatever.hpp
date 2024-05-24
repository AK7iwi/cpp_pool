/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:49:29 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/23 16:39:58 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <stdlib.h>

/* Template swap method */

template <typename T>
void	swap(T &a, T &b) 
{
	T tmp = a;
	a = b;
	b = tmp;
}

/* Template comparison method */

template <typename T>
T const& min(T const &a, T const &b)
{return ((a < b) ? a : b);}

template <typename T>
T const& max(T const &a, T const &b) 
{return ((a > b) ? a : b);}

#endif /* WHATEVER_HPP */