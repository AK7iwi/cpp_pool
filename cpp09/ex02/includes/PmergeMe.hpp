/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/03 13:10:20 by mfeldman         ###   ########.fr       */
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
		std::vector<int> 						_second_vector;
		std::deque<std::pair<int, int> >		_deque;
		std::deque<int> 						_second_deque;
		int 									_nb_value;
		double									_duration_vector;
		double									_duration_deque;
		
		/* Print methods */
		
		void 	_print_time(double const time, char const *container); 
		void	_print_after_sort();
		void 	_print_before_sort(char **argv);
		template <typename T> void _print_s_container(T &c);
		template <typename T> void _print_b_container(T &c);
		
		/* Template insert sort methods */

		template <typename T> void				_insert(T &vector, int value, int index);
		// std::vector<int> 					_generate_jacobsthal_numbers(int n);
		template <typename T> int				_search_index(T &c, int value, int left, int right);
		template <typename T, typename G> void	_insert_sort(T &c, G &second_c);
		
		/* Create container from pair methods */
		//to template 
		
		template <typename T, typename G> void	_create_container_from_pair(T &c, G &second_c) ;
		// std::vector<int>	_create_vector_from_pair(void);
		// std::deque<int>		_create_deque_from_pair(void);
		
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