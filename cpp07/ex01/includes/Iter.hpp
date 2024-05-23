/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:03:30 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/23 14:55:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdint.h>
#include <stdlib.h>

/* Iter method */

template<typename T, typename Func>
void iter(T* const array, uint16_t const length, Func const &func)
{
    for (uint16_t i = 0; i < length; ++i)
        func(array[i]);
}

/* Print method */

template<typename T>
void print_element(T const &element) 
{std::cout << element << std::endl;}

#endif /* ITER_HPP */