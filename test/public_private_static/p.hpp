#pragma once
#include <iostream>

class Test
{
	public:
		Test();
        Test(Test const &cpy);
        ~Test();
		Test&	operator=(Test const &rhs);

		/* Need to add static method */
		
		int 	public_flag;
		
		void 	public_fct_pu();
		void	public_fct_pr();
		void	public_fct_l(int flag);

		void	utils_fct_l(int flag);
		void	utils_fct_pu();
		void	utils_fct_pr();

		void 	test();

	private:
		int		private_flag;

		void 	private_fct_pu();
		void 	private_fct_pr();
		void	private_fct_l(int flag);

};

void utils_fct2_l(int flag);
void utils_fct2_pu(int flag);
void utils_fct2_pr(int flag);
