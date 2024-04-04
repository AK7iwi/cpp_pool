/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/04/04 17:02:33 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_c = 0;
int		ScalarConverter::_i = 0;
float	ScalarConverter::_f = 0.0;
double	ScalarConverter::_d = 0.0;

bool	ScalarConverter::_nan = false;
bool	ScalarConverter::_inf = false;

double	ScalarConverter::_cast = 0.0;

ScalarConverter::ScalarConverter(std::string input) 
{
	if (input.empty()) 
		throw (ScalarConverter::empty_string());
	else if (input == "nanf") 
	{
		_f = std::numeric_limits<float>::quiet_NaN();
		_nan = true;
	} 
	else if (input == "nan") 
	{
		_d = std::numeric_limits<double>::quiet_NaN();
		_nan = true;
	} 
	else if (input == "+inf") 
	{
		_d = std::numeric_limits<double>::infinity();
		_inf = true;
	} 
	else if (input == "-inf")
	{
		_d = -std::numeric_limits<double>::infinity();
		_inf = true;
	} 
	else if (input == "+inff") 
	{
		_f = std::numeric_limits<float>::infinity();
		_inf = true;
	} 
	else if (input == "-inff") 
	{
		_f = -std::numeric_limits<float>::infinity();
		_inf = true;
	} 
	else
		find_type(input);
}

ScalarConverter::ScalarConverter(ScalarConverter &cpy) 
{
	_c = cpy._c;
	_i = cpy._i;
	_f = cpy._f;
	_d = cpy._d;
	_nan = cpy._nan;
	_inf = cpy._inf;
	_cast = cpy._cast;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &rhs) 
{
    if (this != &rhs) 
	{
        _c = rhs._c;
        _i = rhs._i;
        _f = rhs._f;
        _d = rhs._d;
        _nan = rhs._nan;
        _inf = rhs._inf;
        _cast = rhs._cast;
    }
    return (*this);
}

void	ScalarConverter::find_type(std::string input) 
{
	_cast = strtod(input.c_str(), NULL);

	if (is_char(input)) 
	{
		_c = input[0];
		_cast = static_cast<double>(input[0]);
	}
	else if ((_cast > INT_MIN && _cast < INT_MAX) && is_int(input))
		_i = atoi(input.c_str());
	else if ((_cast > -FLT_MAX && _cast < FLT_MAX) && is_float(input))
		_f = atof(input.c_str());
	else if ((_cast > -DBL_MAX && _cast < DBL_MAX) && is_double(input))
		_d = strtod(input.c_str(), NULL);
	else
		throw (ScalarConverter::bad_input());
}

void ScalarConverter::convert() // good catch?
{
	try 
	{
		std::cout	<< "char: "
					<< to_char()
					<< std::endl;
	} 
	catch (std::exception &err) 
	{
		std::cout << err.what() << std::endl;
	}

	try 
	{
		std::cout	<< "int: "
					<< to_int()
					<< std::endl;
	} 
	catch (std::exception &err) 
	{
		std::cout << err.what() << std::endl;
	}

	try 
	{
		std::cout	<< "float: "
					<< std::fixed << std::setprecision(1)
					<< to_float() << "f"
					<< std::endl;
	} 
	catch (std::exception &err) 
	{
		std::cout << err.what() << std::endl;
	}

	try 
	{
		std::cout	<< "double: "
					<< to_double()
					<< std::endl;
	} 
	catch (std::exception &err) 
	{
		std::cout << err.what() << std::endl;
	}
} 

bool	ScalarConverter::is_char(std::string input) 
{return (input.size() == 1 && !isdigit(input[0]));}

bool	ScalarConverter::is_int(std::string input) 
{
	int i = 0;

	if (input[0] == '-' || input[0] == '+')
		i++;
	
	while (input[i]) 
	{
		if (!std::isdigit(input[i]))
			return (false);
		i++;
	}
	return (true);
}

bool ScalarConverter::is_float(const std::string input) 
{
	int		i = 0;
	bool	hasDecimal = false;

	if (input[0] == '-' || input[0] == '+')
		i++;

	while (input[i]) 
	{
		if (!isdigit(input[i])) 
		{
			if (input[i] == '.') 
			{
				if (hasDecimal)
					return (false);
				hasDecimal = true;
			} 
			else if (input[i] == 'f') 
				return (true);
			else 
				return (false);
		}
		i++;
	}
	return (false);
}

bool ScalarConverter::is_double(const std::string input) 
{
	int		i = 0;
	bool	has_decimal = false;

	if (input[0] == '-' || input[0] == '+')
		i++;

	while (input[i]) 
	{
		if (!isdigit(input[i])) 
		{
			if (input[i] == '.') 
			{
				if (has_decimal)
					return (false);
				has_decimal = true;
			} 
			else
				return (false);
		}
		i++;
	}
	return (true);
}

char	ScalarConverter::to_char() 
{
	if (_cast < 0 || _cast > CHAR_MAX || _nan || _inf)
			throw(ScalarConverter::impossible());
	if (_cast < 32 || _cast > 126)
			throw (ScalarConverter::non_displayable());
	else if (_i)
		return (static_cast<char>(_i));
	else if (_f)
		return (static_cast<char>(_f));
	else if (_d)
		return (static_cast<char>(_d));
	return (_c);
}

int	ScalarConverter::to_int() 
{
	if (_cast < INT_MIN || _cast > INT_MAX || _nan || _inf)
		throw (ScalarConverter::impossible());
	else if (_c)
		return (static_cast<int>(_c));
	else if (_f)
		return (static_cast<int>(_f));
	else if (_d)
		return (static_cast<int>(_d));
	return (_i);
}

float	ScalarConverter::to_float()  
{
	if (_cast < -FLT_MAX || _cast > FLT_MAX)
		throw (ScalarConverter::impossible());
	if (_c)
		return (static_cast<float>(_c));
	else if (_i)
		return (static_cast<float>(_i));
	else if (_d)
		return (static_cast<float>(_d));
	return (_f);
}

double	ScalarConverter::to_double() 
{
	if (_cast < -DBL_MAX || _cast > DBL_MAX)
		throw (ScalarConverter::impossible());
	else if (_c)
		return (static_cast<double>(_c));
	else if (_i)
		return (static_cast<double>(_i));
	else if (_f)
		return (static_cast<double>(_f));
	return (_d);
}

std::string ScalarConverter::empty_string::what() const throw() 
{return ("The string is empty");}

std::string ScalarConverter::bad_input::what() const throw() 
{return ("Bad Input");}

std::string ScalarConverter::impossible::what() const throw() 
{return ("Impossible");}

std::string ScalarConverter::non_displayable::what() const throw() 
{return ("Non displayable");}
