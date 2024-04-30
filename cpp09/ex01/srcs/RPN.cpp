/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:58:34 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/30 16:34:03 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &cpy) : 
	_stack(cpy._stack)
{}

RPN::~RPN() {}

RPN&	RPN::operator=(RPN const &rhs) 
{	
	if (this != &rhs)
		_stack = rhs._stack;
	return (*this);
}

void RPN::perform_operation(char sign)
{
	int	n1, n2;

	if (_stack.size() < 2)
		throw (std::invalid_argument("Error: not enough numbers"));
	
	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();
	
	if (sign == '/' && n2 == 0)
		throw (std::invalid_argument("Error: division by 0"));
	
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

void RPN::calcule(std::string const &operation)
{
	try
	{
		parse_operation(operation);
		std::cout << _stack.top() << std::endl;
    }
	catch (std::exception &e)
	{std::cerr <<  e.what() << std::endl;}
}