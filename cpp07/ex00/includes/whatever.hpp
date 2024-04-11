/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:49:29 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 09:15:23 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	swap(T &a, T &b) 
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b)
{return ((a < b) ? a : b);}

template <typename T>
T	max(T a, T b) 
{return ((a > b) ? a : b);}