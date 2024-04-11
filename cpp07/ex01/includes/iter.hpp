/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:03:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/11 09:18:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h> 

template<typename T, typename Func>
void iter(T* array, uint16_t length, Func func)
{
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

template<typename T>
void print_element(const T& element) 
{std::cout << element << std::endl;}