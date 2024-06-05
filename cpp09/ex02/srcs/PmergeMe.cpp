/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:27:27 by mfeldman          #+#    #+#             */
/*   Updated: 2024/06/04 18:00:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors & operators */

PmergeMe::PmergeMe() : _nb_value(0) {}

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

/* Insert sort methods */

template <typename T>
void PmergeMe::_insert(T &c, int value, unsigned long index)
{
    typename T::iterator insert_position = c.begin() + index;

    if (index < c.size() && value > c[index])
        insert_position = c.begin() + index + 1;
    
    c.insert(insert_position, value);
};

std::vector<int> _generate_jacobsthal_numbers(int n) 
{
    std::vector<int> jacobsthal_numbers;
	
    if (n >= 0)
        jacobsthal_numbers.push_back(0); // J(0)
    if (n >= 1) 
        jacobsthal_numbers.push_back(1); // J(1)
    for (int i = 2; i <= n; ++i)
        jacobsthal_numbers.push_back(jacobsthal_numbers[i - 1] + 2 * jacobsthal_numbers[i - 2]);
    
    return (jacobsthal_numbers);
}

template <typename T>
int PmergeMe::_search_index(T &c, int value, int left, int right) 
{
    if (abs(left - right) <= 1)
        return (left);

    std::vector<int> jacobsthal_numbers = _generate_jacobsthal_numbers(right - left);

    // Ensure jacobsthal_numbers has at least one valid number to prevent invalid access
    if (jacobsthal_numbers.empty())
        return (left);

    int jacob_index = jacobsthal_numbers.size() - 1;
    while (jacob_index > 0 && jacobsthal_numbers[jacob_index] >= (right - left))
        --jacob_index;

    // Calculate mid safely
    int mid = left + jacobsthal_numbers[jacob_index];

    // Ensure mid is within bounds
    if (mid >= right || mid < left)
        return (left);

    if (value > c[mid])
        return (_search_index(c, value, mid + 1, right));
    else
        return (_search_index(c, value, left, mid));
}

template <typename T, typename G>
void PmergeMe::_insert_sort(T &c, G &second_c)
{
    int index;
    
    while (!second_c.empty())
    { 
        index = _search_index(c, *(second_c.begin()), 0, c.size());
        _insert(c, *(second_c.begin()), index);
        second_c.erase(second_c.begin());
    }
}

template <typename T, typename G>
void 	PmergeMe::_create_pend_container(T &c, G &pend_c) 
{	
    for (typename T::const_iterator it = c.begin(); it != c.end(); it++)
		if (it->first != -1)
    		pend_c.push_back(it->first);
}

template <typename T, typename G>
void 	PmergeMe::_create_main_container(T &c, G &main_c) 
{	
    for (typename T::const_iterator it = c.begin(); it != c.end(); it++)
    	main_c.push_back(it->second);
}

/* Merge sort method: sort the Pair Sequence by its greater value */

template <typename T>
void PmergeMe::_merge(T &c, int left, int mid, int right)
{
    int sub_array_one = mid - left + 1;
    int sub_array_two = right - mid;

    std::vector<typename T::value_type> left_array(sub_array_one);
    std::vector<typename T::value_type> right_array(sub_array_two);

    for (int i = 0; i < sub_array_one; i++)
        left_array[i] = c[left + i];
    for (int j = 0; j < sub_array_two; j++)
        right_array[j] = c[mid + 1 + j];

    int index_of_sub_array_one = 0;
    int index_of_sub_array_two = 0;
    int index_of_merged_array = left;

    while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two)
    {
        if (left_array[index_of_sub_array_one].second <= right_array[index_of_sub_array_two].second)
        {
            c[index_of_merged_array] = left_array[index_of_sub_array_one];
            index_of_sub_array_one++;
        }
        else
        {
            c[index_of_merged_array] = right_array[index_of_sub_array_two];
            index_of_sub_array_two++;
        }
        index_of_merged_array++;
    }

    while (index_of_sub_array_one < sub_array_one)
    {
        c[index_of_merged_array] = left_array[index_of_sub_array_one];
        index_of_sub_array_one++;
        index_of_merged_array++;
    }

    while (index_of_sub_array_two < sub_array_two)
    {
        c[index_of_merged_array] = right_array[index_of_sub_array_two];
        index_of_sub_array_two++;
        index_of_merged_array++;
    }
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

/* Sort pair method */

template <typename T>
void	PmergeMe::_sort_pair(T &c)
{
	for (typename T::iterator it = c.begin(); it != c.end(); it++)
		if (it->first > it->second && it->first != -1)
			std::swap(it->first, it->second);
}

/* Fill container with pair */

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
		
		if (i + 1 <= _nb_value)
		{	
			buffer = atol(argv[i + 1]);
			if (buffer > INT_MAX)
				throw (std::overflow_error("Error: `int` overflow"));
			pair.second = buffer;
		}
		else
		{
			pair.second = -1;
			std::swap(pair.first, pair.second);
		}
		
		c.push_back(pair);
	}
}

/* Print after sort method */

template <typename T>
void PmergeMe::_print_after_sort(T &c)
{
	std::cout << "After: ";
	for (typename T::const_iterator it = c.begin(); it != c.end(); it++)
    	std::cout << *it << " ";

	std::cout << std::endl;
}

/* Sort vector method */

template <typename T, typename G>
void PmergeMe::_sort_container(char **argv, T &container, G &main_container, G &pend_container, double &duration) 
{
    std::clock_t start_time = std::clock();
        
    _fill_container(argv, container);
    _sort_pair(container);
    _merge_sort(container, 0, container.size() - 1);
    _create_main_container(container, main_container);
    _create_pend_container(container, pend_container);
    _insert_sort(main_container, pend_container);

    std::clock_t end_time = std::clock();
    duration = ((double)end_time / CLOCKS_PER_SEC * 1000) - ((double)start_time / CLOCKS_PER_SEC * 1000);
}

/* Parse method */

void PmergeMe::_parse_nb_sequence(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			if ((!isdigit(argv[i][j]) && argv[i][j] != ' ' && argv[i][j] != '+'))
				throw (std::invalid_argument("Error: invalid character in input"));
		
		_nb_value++;
	}
}

/* Sort method */

void PmergeMe::sort(char **argv)
{
	std::string container;

	try
	{
		_parse_nb_sequence(argv);
		_print_before_sort(argv);
		_sort_container(argv, _vector, _main_vector, _pend_vector, _duration_vector);
		_sort_container(argv, _deque, _main_deque, _pend_deque, _duration_deque);
		_print_after_sort(_main_vector);
		container = "vector";
		_print_time(_duration_vector, container);
		container = "deque";
		_print_time(_duration_deque, container);
	}
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
}