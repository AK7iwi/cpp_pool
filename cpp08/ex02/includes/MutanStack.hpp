/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:54 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/24 15:08:37 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTAN_STACK_HPP
#define MUTAN_STACK_HPP

#include <iostream>
#include <stdlib.h>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> 
{
	public:
		/* Constructors & operators */
		
		MutantStack() {};
		MutantStack(MutantStack const &cpy) :
			MutantStack::stack(cpy) {}
		~MutantStack() {};
		MutantStack& operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			
			return (*this);
		}
		
		/* Iterator */

    	typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		/* Iterator method */
		
   	 	iterator inline	begin()				
		{return (this->c.begin());}
		
		const_iterator inline begin() const		
		{return (this->c.begin());}
		
		iterator inline end()
		{return (this->c.end());}
		
		const_iterator inline end() const
		{return (this->c.end());}
};

#endif /* MUTAN_STACK_HPP */