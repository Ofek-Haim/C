// Ofek Haim - 2018

#include "stdafx.h"
const int global = 15;

void variable()
{
	const int const_int = 50;
	// const_int = 60; // Error!

	int int_number = 10;
	long int long_int = 10000000000000000;
	char tav = 'A';
	float float_number = 3.14;
	double double_number = 3.14159;
	unsigned int unsigned_number = 10;
	// unsigned_number = -10; // Error!
	signed int signed_number = 10;
	signed_number = -10;
	long double long_double = 3.1415929;

	typedef int my_new_name_for_int;
	my_new_name_for_int x = 3;
	typedef unsigned long ulong;
	ulong i, j;

	int  number = 17;
	char c = 'c'; /* ascii value is 99 */
	printf("c = %d\n", (int)c); // print 99

	printf("global = %d\n", global);
	// extern - Global from other file.
	// static - Just for the local file.
}


int main()
{
    variable();
    return 0; // OK
}
