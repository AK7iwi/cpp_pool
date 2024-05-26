#include "p.hpp"

int main()
{
	// int flag = 0; for static methode 


	Test A;

	/*Private test*/

	std::cout << "Private Test" << std::endl;

	A.test(); //Use of a public methode "in public"
	A.public_fct_pu(); //Use of a an other public methode
	//A.private_fct_pu(); Impossible because private methode 

	/*Public test*/
	
	std::cout << "Public Test" << std::endl;

	A.public_flag++;
	std::cout << A.public_flag << std::endl;
	//A.private_flag++; impossible because private varibale
	return (0);
}