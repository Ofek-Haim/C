// Ofek Haim - 2018

#include "stdafx.h"

// This is a declaration.
void functions();

float celsius_to_fahrenheit(float celsius){return 1.8 * celsius + 32;}

void print_k() 
{
	printf("k\n");
	return;
	printf("k\n");
}

unsigned long recursive_factorial(unsigned int n)
{
	if (n == 0)
		return 1;

	return n * recursive_factorial(n - 1);
}

unsigned long shortened_recursive_factorial(unsigned int n)
{
	return n == 0 ? 1 : n * shortened_recursive_factorial(n - 1);
}

int main()
{
	functions();
	printf("%ld\n", recursive_factorial(5));
	return 0; // OK
}

// And here is the definition.
void functions()
{
	print_k();
}