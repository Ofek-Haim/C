// Ofek Haim - 2018

#include "stdafx.h"
#include <stddef.h>

void ref_swap(int *var1, int *var2)
{
	int temp = *var2;
	*var2 = *var1;
	*var1 = temp;
}
void pointers()
{
	char tav = 'a';
	printf("%p\n", &tav);

	int number = 3;
	int *number_pointer = &number;

	int *p;
	printf("p -> %p\n");
	p = NULL;
	printf("p -> %p\n");

	printf("%p\n", &number_pointer);
	printf("%p = %d \n", number_pointer, *number_pointer);
	printf("%p = %p \n ", number_pointer, &number);
}	


int main()
{
	pointers();
	return 0; // OK
}
