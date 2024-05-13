#ifndef A_H
#define A_H

#include <iostream>

class Test
{
	public:
		Test();
        Test(Test const &cpy);
        ~Test();
		Test&	operator=(Test const &rhs);

		int 	const	_flag;

};

#endif /* A_H */
