/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/30 16:27:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class PmergeMe 
{
	public:
		PmergeMe();
        PmergeMe(PmergeMe const &cpy);
        ~PmergeMe();
		PmergeMe&	operator=(PmergeMe const &rhs);
		
	private: 
};