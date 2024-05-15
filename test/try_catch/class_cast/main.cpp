#include "a.hpp"

int main()
{
	Test *test = NULL;
	test = new (A);

	try 
	{
		(void)dynamic_cast<B &>(*test);
		std::cout << "Now B" << std::endl;
	} 
	catch (std::exception const &e)
	{std::cout  << "Yet A" << std::endl;}

	Test *test2 = NULL;
	test2 = new (A);

	try 
	{
		(void)dynamic_cast<A &>(*test);
		std::cout << "Yet A" << std::endl;
	} 
	catch (std::exception const &e)
	{std::cout  << "Not A anymore" << std::endl;}

}