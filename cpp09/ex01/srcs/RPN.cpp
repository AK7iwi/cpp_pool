/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/28 18:58:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &cpy) //cpy in bad order 
{
	while (!_stack.empty())
		_stack.pop();
		
	std::stack<int> stack_tmp = cpy._stack;

	while (!stack_tmp.empty())
	{
        _stack.push(cpy._stack.top());
        stack_tmp.pop();
    }
}

RPN::~RPN() {}

RPN&	RPN::operator=(RPN const &rhs) //assignement in reverse order 
{	
	if (this != &rhs)
	{	
		while (!_stack.empty())
			_stack.pop();
			
		std::stack<int> stack_tmp = rhs._stack;

		while (!stack_tmp.empty())
		{
        	_stack.push(rhs._stack.top());
        	stack_tmp.pop();
    	}
	}
	
	return (*this);
}

/* Operation method */

void RPN::perform_operation(char const sign)
{
	if (_stack.size() < 2)
		throw (std::invalid_argument("Error: not enough numbers"));
		
	uint8_t	n1, n2;
	
	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();
	
	if (sign == '/' && n1 == 0)
		throw (std::runtime_error("Error: division by 0"));
		
	switch (sign)
	{
		case '+':
			_stack.push(n2 + n1);
			break;
		case '-':
			_stack.push(n2 - n1);
			break;
		case '/':
			_stack.push(n2 / n1);
			break;
		case '*':
			_stack.push(n2 * n1);
			break;
	}	
}

/* Parse method */

static bool inline is_valid_char(char const c)
{return ((c == ' ' || c == '+' || c == '-' || c == '/' || c == '*') || (c >= '0' && c <= '9'));}

static bool inline is_operator(char const c)
{return (c == '+' || c == '-' || c == '/' || c == '*');}

void RPN::parse_operation(std::string const &operation)
{
	if (operation.empty())
		throw (std::invalid_argument("Error: string is empty"));

	for (int i = 0; operation[i]; i++)
	{
		if (operation[i] == ' ')
			continue;
		else if (!is_valid_char(operation[i]))
			throw (std::invalid_argument("Error: invalid character"));
		else if (is_operator(operation[i]))
			perform_operation(operation[i]);
		else
			_stack.push(operation[i] - 48);
	}
}

/* Calcul method */

void RPN::calcule(std::string const &operation)
{
	try
	{
		parse_operation(operation);
		std::cout << _stack.top() << std::endl;
    }
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
}