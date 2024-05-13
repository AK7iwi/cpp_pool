#include "a.hpp"

int main()
{
	Test a;

	std::cout << a._flag;

	Test b(a);

	std::cout << b._flag;

	Test c;
	
	c = b;

	std::cout << c._flag;
	
	return (0);
}