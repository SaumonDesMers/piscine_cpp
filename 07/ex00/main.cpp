#include <iostream>
#include "whatever.hpp"

int main()
{
	int int_a=4, int_b=2;
	test(int_a, int_b, "int");

	float float_a=4.2f, float_b=2.1f;
	test(float_a, float_b, "float");

	char char_a='4', char_b='2';
	test(char_a, char_b, "char");

	long double long_double_a=4.2, long_double_b=2.1;
	test(long_double_a, long_double_b, "long double");

	int *ptr_a=&int_a, *ptr_b=&int_b;
	test(ptr_a, ptr_b, "int pointer");
	return 0;
}
