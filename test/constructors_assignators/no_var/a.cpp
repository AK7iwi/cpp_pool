#include "a.hpp"

Test::Test() {}

Test::Test(Test const &cpy)
{*this = cpy;}

Test::~Test() {}

Test&	Test::operator=(Test const &rhs) 
{	
	(void)rhs;
	return (*this);
}