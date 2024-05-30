/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/30 15:17:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &cpy)
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

RPN&	RPN::operator=(RPN const &rhs) 
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

void RPN::_perform_operation(char const sign)
{
	if (_stack.size() < 2)
		throw (std::invalid_argument("Error: not enough numbers"));
		
	int	n1, n2;
	
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

static bool inline _is_operator(char c)
{return (std::string("+-*/").find(c) != std::string::npos);}

static bool inline _is_valid_char(char c) 
{return (std::isdigit(c) || std::isspace(c) || _is_operator(c));}

void RPN::_parse_operation(std::string const &operation)
{
	if (operation.empty())
		throw (std::invalid_argument("Error: string is empty"));

	for (int i = 0; operation[i]; i++)
	{
		if (!_is_valid_char(operation[i]))
			throw std::invalid_argument("Error: Invalid character");
	}

	for (int i = 0; operation[i]; i++)
	{
		if (operation[i] == ' ')
			continue;
		else if (_is_operator(operation[i]))
			_perform_operation(operation[i]);
		else
			_stack.push(operation[i] - 48);
	}

	if (_stack.size() != 1)
		throw std::invalid_argument("Error");
}
	
/* Calcul method */

void RPN::calcule(std::string const &operation)
{	
	try
	{
		_parse_operation(operation);
		std::cout << _stack.top() << std::endl;
    }
	catch (std::exception const &e)
	{std::cerr << e.what() << std::endl;}
}