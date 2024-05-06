/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:29:36 by mfeldman          #+#    #+#             */
/*   Updated: 2024/05/05 21:47:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &cpy) 
{*this = cpy;}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs)
{return (*this);}

static void to_char(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< lit_as_char[0]
					<< std::endl;
	else if (lit_as_double < 0 || lit_as_double >= CHAR_MAX)
		std::cout	<< "Impossible" 
					<< std::endl; // throw/catch
	else if (lit_as_double <= 32 && lit_as_double >= 0)
		std::cout	<< "Non displayable" //throw/catch
					<< std::endl;
	else
		std::cout	<< static_cast<char>(lit_as_double) 
					<< std::endl;
}

static void to_int(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< static_cast<int>(lit_as_char[0])
					<< std::endl;
	else if (lit_as_double < INT_MIN || lit_as_double > INT_MAX)
		std::cout	<< "Impossible" //throw/catch
					<< std::endl;
	else 
		std::cout	<< static_cast<int>(lit_as_double)
					<< std::endl;
}

static void to_float(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< std::fixed 
					<< std::setprecision(1) 
					<< static_cast<float>(lit_as_char[0])
					<< "f"
					<< std::endl;
	else if (lit_as_double < -FLT_MAX || lit_as_double > FLT_MAX)
		std::cout	<< "Impossible" //throw/catch
					<< std::endl;
	else 
		std::cout 	<< std::fixed 
					<< std::setprecision(1) 
					<< static_cast<float>(lit_as_double) 
					<< "f" 
					<< std::endl;
}

static void to_double(const char *lit_as_char, double lit_as_double)
{
	if (!isdigit(lit_as_char[0]) && !lit_as_char[1])
		std::cout	<< std::fixed
					<< std::setprecision(1) 
					<< static_cast<double>(lit_as_char[0])
					<< std::endl;
	else if (lit_as_double < -DBL_MAX || lit_as_double > DBL_MAX)
		std::cout	<< "Impossible" //throw/catch
					<< std::endl;
	else 
		std::cout	<< std::fixed
					<< std::setprecision(1) 
					<< lit_as_double;
					// << std::endl;
}

static bool limit_type(std::string const &literal)
{
	if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff")
	{
		std::cout	<< "Char: Impossile" 
					<< std::endl
					<< "Int: Impossile" 
					<< std::endl
		 			<< "Float: +inff" 
					<< std::endl
					<< "Double: +inf" 
					<< std::endl
					<< std::endl;
		return (true);
	}
	else if (literal == "nan" || literal == "nanf")
	{
		std::cout	<< "Char: Impossile" 
					<< std::endl
					<< "Int: Impossile" 
					<< std::endl
					<< "Float: nanf" 
					<< std::endl
					<< "Double: nan" 
					<< std::endl
					<< std::endl;
		return (true);
	}
	
	return (false);
}

static void display(std::string const &literal)
{
	if (limit_type(literal))
		return ;
		
	const char *lit_as_char = literal.c_str();
	double lit_as_double = strtod(lit_as_char, NULL);
	
	std::cout << "Char: ";
	to_char(lit_as_char, lit_as_double);

	std::cout << "Int: ";
	to_int(lit_as_char, lit_as_double);

	std::cout << "Float: ";
	to_float(lit_as_char, lit_as_double);

	std::cout << "Double: ";
	to_double(lit_as_char, lit_as_double);
}

static bool is_char(std::string const &literal)
{return (literal.size() == 1 && !isdigit(literal[0]));}

static bool is_int(std::string const &literal)
{
	int i = 0;

	if (literal[0] == '-' || literal[0] == '+')
		i++;
		
	while (literal[i]) 
	{
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}

	return (true);
}

static bool is_double(std::string const &literal)
{
	if (literal == "-inf" || literal == "+inf" || literal == "nan")
		return (true);
		
	uint8_t point = 0;
	int i = 0;

	if (literal[0] == '-' || literal[0] == '+')
		i++;

	while (literal[i])
	{
		if (!isdigit(literal[i]))
		{
			if (literal[i] == '.')
				point++;
			else 
				return (false);
		}
		i++;
	}
	
	return (point == 1 && isdigit(literal[i - 1]));
}

static bool is_float(std::string const &literal)
{
	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (true);
		
	std::string d_cpy = literal;
	int len = std::strlen(literal.c_str());
	
	d_cpy[len - 1] = '\0';
	
	return (is_double(d_cpy) && literal[len - 1] == 'f' && isdigit(literal[len - 2])); //check this return
}

static bool find_and_display_type(std::string const &literal)
{
	std::cout << "The original type is: ";
	
	//cout once, see cpp05
	
	if (is_char(literal)) 
		return (std::cout << "Char" << std::endl, true);
	else if (is_int(literal))
		return (std::cout << "Int" << std::endl, true);
	else if (is_float(literal))
		return (std::cout << "Float" << std::endl, true);
	else if (is_double(literal))
		return (std::cout << "Double" << std::endl, true);
		
	return (false);
}

void ScalarConverter::convert(std::string const &literal)
{	
	if (!find_and_display_type(literal))
	{
		std::cout	<< "Unknow(Wrong input)"
					<< std::endl;
		return ; // catch throw
	}
	display(literal);
}
