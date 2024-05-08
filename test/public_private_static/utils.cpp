#include "p.hpp"

//Local variable

void Test::utils_fct_l(int flag)
{
	std::cout << "Utils fct1: ";
	flag++;

}

void utils_fct2_l(int flag)
{
	std::cout << "Utils fct2: ";
	flag++;
}

//Public class variable

void Test::utils_fct_pu()
{
	std::cout << "Utils fct1: ";
	public_flag++;
}

void utils_fct2_pu(int flag)
{
	std::cout << "Utils fct2: ";
	flag++;
}

//Private class variable

void Test::utils_fct_pr()
{
	std::cout << "Utils fct1: ";
	private_flag++;
}

void utils_fct2_pr(int flag)
{
	std::cout << "Utils fct2: ";
	flag++;
}