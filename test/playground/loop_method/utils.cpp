#include "a.hpp"

bool is_digit_1(std::string const &digit)
{	
	for (uint8_t i = 0; i < digit.length(); i++) 
		if (!isdigit(digit[i]))
			return (false);
			
	return (true);
}

bool is_digit_2(std::string const &digit)
{	
	for (uint8_t i = 0; digit[i]; i++)
		if (!isdigit(digit[i]))
			return (false);
			
	return (true);
}