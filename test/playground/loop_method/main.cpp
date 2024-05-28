#include "a.hpp"

int main()
{
	std::string test1 = "99925785785785887";
	std::string test2 = "Char";

	if (is_digit_1(test1))
		std::cout << "It's a digit" << std::endl;
	else 
		std::cout << "It's not a digit" << std::endl;

	if (is_digit_1(test2))
		std::cout << "It's a digit" << std::endl;
	else 
		std::cout << "It's not a digit" << std::endl;

	if (is_digit_2(test1))
		std::cout << "It's a digit" << std::endl;
	else 
		std::cout << "It's not a digit" << std::endl;

	if (is_digit_2(test2))
		std::cout << "It's a digit" << std::endl;
	else 
		std::cout << "It's not a digit" << std::endl;

}