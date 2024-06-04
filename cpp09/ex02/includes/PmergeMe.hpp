/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/04 10:37:08 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <stdlib.h>
#include <limits.h> 

class PmergeMe 
{
	public:
		/* Constructors & operators */
		
		PmergeMe();
        PmergeMe(PmergeMe const &cpy);
        ~PmergeMe();
		PmergeMe&	operator=(PmergeMe const &rhs);

		void sort(char **argv);
		
	private:
		std::vector<std::pair<int, int> >		_vector;
		std::vector<int> 						_main_vector;
		std::vector<int> 						_pend_vector;
		
		std::deque<std::pair<int, int> >		_deque;
		std::deque<int> 						_main_deque;
		std::deque<int> 						_pend_deque;
		
		int 									_nb_value;
		double									_duration_vector;
		double									_duration_deque;
		
		/* Print methods */
		
		template <typename T> void _print_b_container(T &c);
		template <typename T> void _print_after_sort(T &c);
		// void 	_print_time(double const time, char const *container);
		void	_print_time(double const time, std:: string &container);
		void 	_print_before_sort(char **argv);
		
		/* Template insert sort methods */

		template <typename T> void				_insert(T &vector, int value, unsigned long index);
		// std::vector<int> 					_generate_jacobsthal_numbers(int n);
		template <typename T> int				_search_index(T &c, int value, int left, int right);
		template <typename T, typename G> void	_insert_sort(T &c, G &second_c);
		
		/* Create container from pair methods */ 
		
		template <typename T, typename G> void	_create_pend_container(T &c, G &pend_c);
		template <typename T, typename G> void  _create_main_container(T &c, G &main_c);
		
		/* Template merge sort methods */
		
		template <typename T> void	_merge(T &a, int beg, int mid, int end);
		template <typename T> void	_merge_sort(T &c, int beg, int end);
		
		/* Template sort pair method */

		template <typename T> void	_sort_pair(T &c);

		/* Template fill container method */
		
		template <typename T> void	_fill_container(char **argv, T &c);
		
		/* Sort containers methods */
		
		void	_sort_vector(char **argv);
		void	_sort_deque(char **argv);
		
		/* Parse method */
		
		void 	_parse_nb_sequence(char **argv);
		
};

#endif /* PMERGE_ME_HPP */