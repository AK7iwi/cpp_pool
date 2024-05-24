/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:33:09 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/24 14:53:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>

/* Template find method */

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw (std::out_of_range("=> Value not found"));
		
	return (it);
}

#endif /* EASY_FIND_HPP */