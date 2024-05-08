#include "p.hpp"

int main()
{
	// int flag = 0; for static methode 

	/*Private test*/

	std::cout << "Private Test" << std::endl;

	Test A;
	A.test();

	/*Public test*/
	std::cout << "Public Test" << std::endl;

	A.public_flag++;
	std::cout << A.public_flag << std::endl;
	//A.private_flag++; impossible --> private
	return (0);
}