#include "a.hpp"

Test::Test() : 
	_flag(5) {}

Test::Test(Test const &cpy) : 
	_flag(cpy._flag) {}

Test::~Test() {}

Test&	Test::operator=(Test const &rhs) 
{	
	(void)rhs;
	return (*this);
}