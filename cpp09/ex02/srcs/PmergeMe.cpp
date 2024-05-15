/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:27 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/14 21:31:46 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &cpy)
{
	_nb_value = cpy._nb_value;
	_duration_vector = cpy._duration_vector;
	_duration_deque = cpy._duration_deque;
	_vector.clear();
	_vector.insert(_vector.end(), cpy._vector.begin(), cpy._vector.end());
	_deque.clear();
	_deque.insert(_deque.end(), cpy._deque.begin(), cpy._deque.end());
}

PmergeMe::~PmergeMe() {}

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs) 
{	
	if (this != &rhs)
	{
		_nb_value = rhs._nb_value;
		_duration_vector = rhs._duration_vector;
		_duration_deque = rhs._duration_deque;
		_vector.clear();
		_vector.insert(_vector.end(), rhs._vector.begin(), rhs._vector.end());
		_deque.clear();
		_deque.insert(_deque.end(), rhs._deque.begin(), rhs._deque.end());
	}
	
	return (*this);
}

template <typename T, typename G>
void	PmergeMe::_insert_sort(T &c, G &second_c)
{
	int	index;
	
	while (!second_c.empty())
	{ 
		index = _search_index(c, *(second_c.begin()), 0, c.size());
		_insert(c, *(second_c.begin()), index);
		second_c.erase(second_c.begin());
	}
};

template <typename T>
int	 PmergeMe::_search_index(T &c, int value, int left, int right)
{
	if (abs(left - right) <= 1)
		return (left);
	
	int	mid = (left + right) / 2 - 1;
	
	if (value > c[mid].first)
		return (_search_index(c, value, mid + 1, right));
	else
		return (_search_index(c, value, left, mid));
};

template <typename T>
void	PmergeMe::_insert(T &c, int value, int index)
{
	std::pair<int, int>	pair;
	typename T::iterator insert_position = c.begin() + index;

	pair.first = value;
	pair.second = -1;

    if (value > c[index].first)
        insert_position = c.begin() + index + 1;
    c.insert(insert_position, pair);
};

std::vector<int>	PmergeMe::_create_vector_from_pair()
{
	std::vector<int>	res;
	
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
		if (it->second != -1)
			res.push_back(it->second);
			
	return (res);
}

std::deque<int>	PmergeMe::_create_deque_from_pair()
{
	std::deque<int>		res;
	
	for (std::deque<std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
		if (it->second != -1)
			res.push_back(it->second);
			
	return (res);
}

template <typename T>
void	PmergeMe::_merge_sort(T &c, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		_merge_sort(c, beg, mid);
		_merge_sort(c, mid + 1, end);
		_merge(c, beg, mid, end);
	}
}

template <typename T>
void	PmergeMe::_merge(T &c, int left, int mid, int right)
{
	int	sub_array_one = mid - left + 1; 
	int	sub_array_two = right - mid;
 
	int *left_array = new int[sub_array_one];
	int *right_array = new int[sub_array_two];
 
	for (int i = 0; i < sub_array_one; i++)
		left_array[i] = c[left + i].first;
	for (int j = 0; j < sub_array_two; j++)
		right_array[j] = c[mid + 1 + j].first;
 
	int index_of_sub_array_one = 0;
	int index_of_sub_array_two = 0;
	int index_of_merged_array = left;
 
	while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two)
	{
		if (left_array[index_of_sub_array_one] <= right_array[index_of_sub_array_two])
		{
			c[index_of_merged_array].first = left_array[index_of_sub_array_one];
			index_of_sub_array_one++;
		}
		else
		{
			c[index_of_merged_array].first = right_array[index_of_sub_array_two];
			index_of_sub_array_two++;
		}
		index_of_merged_array++;
	}

	while (index_of_sub_array_one < sub_array_one)
	{
		c[index_of_merged_array].first = left_array[index_of_sub_array_one];
		index_of_sub_array_one++;
		index_of_merged_array++;
	}

	while (index_of_sub_array_two < sub_array_two)
	{
		c[index_of_merged_array].first = right_array[index_of_sub_array_two];
		index_of_sub_array_two++;
		index_of_merged_array++;
	}

	delete[] left_array;
	delete[] right_array;
}

template <class T>
void	PmergeMe::_sort_pair(T &c)
{
	for (typename T::iterator it = c.begin(); it != c.end(); it++)
		if (it->second > it->first && it->second != -1)
			std::swap(it->first, it->second);
};

template <typename T>
void	PmergeMe::_fill_container(char **argv, T &c)
{
	std::pair<int, int>	pair;
	int					buffer;

	for (int i = 1; i <= _nb_value; i += 2)
	{	
		buffer = atol(argv[i]);
		if (buffer > INT_MAX)
			throw (std::overflow_error("Error: `int` overflow"));

		pair.first = buffer;
		
		if (i + 1 < _nb_value)
		{	
			buffer = atol(argv[i + 1]);
			if (buffer > INT_MAX)
				throw (std::overflow_error("Error: `int` overflow"));
			pair.second = buffer;
		}
		else
			pair.second = -1;
		c.push_back(pair);
	}
}

void	PmergeMe::_sort_vector(char **argv)
{
	std::clock_t	start_vector = std::clock();

	_fill_container(argv, _vector);
	_sort_pair(_vector);
	_merge_sort(_vector, 0, _vector.size() - 1);
	
	std::vector<int> second_vector = _create_vector_from_pair();
	_insert_sort(_vector, second_vector);

	std::clock_t end_vector = std::clock();
	_duration_vector = ((double)end_vector / CLOCKS_PER_SEC * 1000) - ((double)start_vector / CLOCKS_PER_SEC * 1000);
}

void	PmergeMe::_sort_deque(char **argv)
{
	std::clock_t	start_deque = std::clock();

	_fill_container(argv, _deque);
	_sort_pair(_deque);
	_merge_sort(_deque, 0, _deque.size() - 1);

	std::deque<int> second_deque = _create_deque_from_pair();
	_insert_sort(_deque, second_deque);

	std::clock_t end_deque = std::clock();	
	_duration_deque = ((double)end_deque / CLOCKS_PER_SEC * 1000) - ((double)start_deque / CLOCKS_PER_SEC * 1000);
}

void PmergeMe::_parse_nb_sequence(char **argv)
{
	for (int i = 1; argv[i]; i++) //delete the scoop?
	{
		for (int j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]) && argv[i][j] != ' ') // int min/ max
				throw (std::invalid_argument("Error: invalid character in input"));
				
		_nb_value = i;
	}
}

void PmergeMe::sort(char **argv)
{
	try
	{
		_parse_nb_sequence(argv);
		_print_before_sort(argv);
		_sort_vector(argv);
		_sort_deque(argv);
		_print_after_sort();
		_print_time_vector();
		_print_time_deque();
	}
	catch (std::exception const &e)
	{std::cerr <<  e.what() << std::endl;}
}