#include "a.hpp"

int main()
{
	Test a;
	Test b(a);
	Test c;
	
	c = b;
	
	return (EXIT_SUCCESS);
}