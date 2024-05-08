#include "p.hpp"

Test::Test() : 
	public_flag(0), private_flag(0)  
{}

Test::Test(Test const &cpy)
{
	public_flag = cpy.public_flag;
	private_flag = cpy.private_flag;
}

Test::~Test() {}

Test&	Test::operator=(Test const &rhs) 
{	
	if (this != &rhs)
	{
		public_flag = rhs.public_flag;
		private_flag = rhs.private_flag;
	}
	
	return (*this);
}

//Fct for public class variable

void Test::public_fct_pu()
{
	std::cout << "Public fct: ";
	public_flag++;
}

void Test::private_fct_pu()
{
	std::cout << "Private fct: ";
	public_flag++;
}

//Fct for private class variable

void Test::public_fct_pr()
{
	std::cout << "Public fct: ";
	private_flag++;
}

void Test::private_fct_pr()
{
	std::cout << "Private fct: ";
	private_flag++;
}

//Fct for local variable

void Test::public_fct_l(int flag)
{
	std::cout << "Public fct: ";
	flag++;
}

void Test::private_fct_l(int flag)
{
	std::cout << "Private fct: ";
	flag++;
}

static void static_fct_l(int flag)
{
	std::cout << "Static fct: ";
	flag++;
}

void Test::test()
{
	int flag = 0;

	std::cout << "Public variable: " << std::endl;

	public_fct_pu();
	std::cout <<  public_flag << std::endl;
	private_fct_pu();
	std::cout << public_flag << std::endl;
	utils_fct_pu();
	std::cout << public_flag << std::endl;
	utils_fct2_pu(public_flag);
	std::cout << public_flag << std::endl;

	std::cout << std::endl;

	std::cout << "Private variable: " << std::endl;

	public_fct_pr();
	std::cout << private_flag << std::endl;
	private_fct_pr();
	std::cout << private_flag << std::endl;
	utils_fct_pr();
	std::cout << private_flag << std::endl;
	utils_fct2_pr(private_flag);
	std::cout << private_flag << std::endl;

	std::cout << std::endl;

	std::cout << "Local variable: " << std::endl;

	public_fct_l(flag);
	std::cout << flag << std::endl;
	private_fct_l(flag);
	std::cout << flag << std::endl;
	static_fct_l(flag);
	std::cout << flag << std::endl;
	utils_fct_l(flag);
	std::cout << flag << std::endl;
	utils_fct2_l(flag);
	std::cout << flag << std::endl;
}
