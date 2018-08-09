// Ofek Haim - 2018

#include "stdafx.h"
#include <string.h>

void print_2()
{
	printf("2\n");
}

float add(float x, float y)
{
	return x + y;
}

// Compare Integers
int CompareInts(const void *a, const void *b) {
	int numA = *(int *)a;
	int numB = *(int *)b;
	if (numA == numB) return 0;
	if (numA > numB) return 1;
	return -1;
}

void pointing_arrays_and_functions()
{
	
	printf("The size of int is %d\n", sizeof(int));
	printf("The size of char is %d\n", sizeof(char));
	printf("The size of double is %d\n", sizeof(double));
	printf("The size of long double is %d\n", sizeof(long double));

	char c = 'a';
	char *char_p = &c, *char_p_plus_1, *char_p_plus_2;

	char_p_plus_1 = char_p + 1;
	char_p_plus_2 = char_p + 2;
	
	printf("%p\n", char_p);
	printf("p + 1 %p\n", char_p_plus_1);
	printf("p + 2 %p\n", char_p_plus_2);

	int m = 3;
	int *int_p, *int_p_plus_1, *int_p_plus_2;
	int_p = &m;

	int_p_plus_1 = int_p + 1;
	int_p_plus_2 = int_p + 2;
	printf("p + 1 %p\n", int_p_plus_1);
	printf("p + 2 %p\n", int_p_plus_2);

	printf("\n\n///////////////////////////\n\n");

	int number = 30;
	int *p = &number;
	printf("%p\n", p);
	printf("%p\n", ++p);
	printf("%p\n", p);

	printf("\n\n///////////////////////////\n\n");

	int *p__1, *p__2;
	int x = 10;
	p__1 = &x + 2, p__2 = &x;

	printf("%p\n", p__1);
	printf("%p\n", p__2);
	printf("%d\n", (p__1 - p__2));

	printf("\n\n///////////////////////////\n\n");
	
	int *p_nums;
	int nums[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	p_nums = nums;
	printf("%d\n", *p_nums);
	printf("%d\n", *(p_nums + 2));
	*(p_nums + 2) = 2000;
	printf("%d\n", *(p_nums + 2));
	*(nums + 2) = 5000;
	printf("%d\n", *(p_nums + 2));
	printf("%d\n", nums[2]);

	printf("\n\n///////////////////////////\n\n");

	int num = 3, *pnum = &num;
	printf("%d\n", *pnum);
	pnum[0] = 4;
	printf("%d\n", *pnum);
	/* This is a dangerous line! "*/
	//pnum[2] = 4;

	//<t> *const <name> // Can not change the addres.
	//const <t> *<name> // Can not change the value of the addres.
	//const <t> *const <name> // Can not change the addres and the value of the addres.

	printf("\n\n///////////////////////////\n\n");

	//float(*op_fn)(float a, float b); // Pointr to function // == float (*op_fn)(float, float);
	//typedef float(*op_fn_ptr)(float, float);

	printf("\n\n///////////////////////////\n\n");

	void(*print_fn)() = &print_2;
	float(*op_fn)(float x, float y) = &add;

	/* Prints 2. */
	(*print_fn)();

	/* Prints 5.0. */
	printf("%f\n", (*op_fn)(2, 3));

	printf("\n\n///////////////////////////\n\n");

	int j = 1;
	double d = 1.5;
	void *vp;
	vp = &j;
	vp = &d;

	char tav = '?';
	void *p_tav = &tav;
	printf("%c\n", *((char *)p_tav));

	printf("\n\n///////////////////////////\n\n");

	char str1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str2[6];
	memcpy(str2, str1, 6);
	printf("%s\n", str2);

}

int main()
{
	pointing_arrays_and_functions();
	
}
