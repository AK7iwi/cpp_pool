/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/15 17:09:25 by mfeldman         ###   ########.fr       */
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
		MutantStack() {};
		MutantStack(MutantStack const &cpy) : MutantStack::stack(cpy) {}
		~MutantStack() {};
		MutantStack& operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}
	
    	typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

   	 	iterator		begin()				
		{return(this->c.begin());}
		
		const_iterator	begin()	const		
		{return(this->c.begin());}
		
		iterator		end()
		{return(this->c.end());}
		
		const_iterator	end() const
		{return(this->c.end());}
};