/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:31 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/06 16:11:12 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <stdlib.h>
#include <limits.h>

class PmergeMe 
{
	public:
		PmergeMe();
        PmergeMe(PmergeMe const &cpy);
        ~PmergeMe();
		PmergeMe&	operator=(PmergeMe const &rhs);

		void sort(char **argv);
		
	private:
		std::vector<std::pair<int, int>>		_vector;
		std::deque<std::pair<int, int>>			_deque;
		int 									_nb_value;
		double									_duration_vector;
		double									_duration_deque;
		
		void 	_parse_nb_sequence(char **argv);
		void	_sort_vector(char **argv);
		void	_sort_deque(char **argv);

		template <typename T> void	_fill_container(char **argv, T &c);
		template <typename T> void	_sort_pair(T &c);
		template <typename T> void	_merge_sort(T &c, int beg, int end);
		template <typename T> void	_merge(T &a, int beg, int mid, int end);

		std::vector<int>	_create_vector_from_pair(void);
		std::deque<int>		_create_deque_from_pair(void);

		template <typename T, typename G> void	_insert_sort(T &c, G &second_c);
		template <typename T> int				_search_index(T &c, int value, int left, int right);
		template <typename T> void				_insert(T &vector, int value, int index);

		void 	_print_before_sort(char **argv); 
		void	_print_after_sort();
		void	_print_time_vector();
		void	_print_time_deque();
};
