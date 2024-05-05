/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:14:35 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/05 20:06:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutanStack.hpp"

int main()
{
	std::cout << "\nTests with MutantStack:" << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "*it = " << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	
	std::cout << "\nTests with std::list:"  << std::endl;

	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "Top: " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "size: " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
		
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();
	++it2;
	--it2;
	while (it2!= ite2) 
	{
		std::cout << "*it = " << *it2 << std::endl;
		++it2;
	}
	
	std::list<int> t(mlist);
	
	return (EXIT_SUCCESS);
}