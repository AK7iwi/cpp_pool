#ifndef A_H
#define A_H

#include <iostream>

class Test
{
	public:
		Test();
        Test(Test const &cpy);
        virtual ~Test();
		Test&	operator=(Test const &rhs);
};

class A : public Test {};

class B : public Test {};

class C : public Test {};

#endif /* A_H */
