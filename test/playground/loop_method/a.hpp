#ifndef A_H
#define A_H

#include <iostream>
// #include <stdexcept>
#include <stdint.h>

class Test
{
	public:
		Test();
        Test(Test const &cpy);
        ~Test();
		Test&	operator=(Test const &rhs);

};

bool is_digit_1(std::string const &digit);
bool is_digit_2(std::string const &digit);

#endif /* A_H */
