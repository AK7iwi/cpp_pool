#include "a.hpp"

int main()
{
	bool flag = 1;

	try 
	{	
		std::cout << "Test: " << std::endl; 
		if (flag == 1)
			throw (std::out_of_range("Error: Not 0"));
	} 
	catch (std::out_of_range const &e)
	{std::cout  << "Catch work" << std::endl;}
}