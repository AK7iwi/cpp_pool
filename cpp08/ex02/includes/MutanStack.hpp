/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/13 18:56:40 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <iterator>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> 
{
	public:
    	typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    	iterator begin() {return (std::stack<T>::c.begin());}
    	iterator end() {return (std::stack<T>::c.end());}

    	const_iterator cbegin() const {return (std::stack<T>::c.cbegin());}
    	const_iterator cend() const {return (std::stack<T>::c.cend());}
};