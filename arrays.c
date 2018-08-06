// Ofek Haim - 2018

#include "stdafx.h"
#include <stdlib.h> // for malloc() and free()

int get_number()
{
	int num_numbers;
	printf("Please enter a number:");
	scanf_s("%d", &num_numbers);
	return num_numbers;
}

void arrays()
{
	int numbers[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf_s("%d", &numbers[i]);
	}
	
	printf("The numbers that get input in reverse order...\n");
	for (i = 9; i >= 0; i--)
		printf("%d\n", numbers[i]);

	int three_nums[3] = { 12, 22, 33 };
	char nums[] = { "Goodbye" }; // == >   nums[7]
	int five_nums[] = { 3, 5, 65, 189, 54 }; // == > nums[5]

	const int array_size = 9;
	int dynamic_array[array_size];
	

	printf("////////////////////////\n");

	int array_len = get_number();
	int *d_array = (int*)malloc(sizeof(int) * array_len);

	for (int j = 0; j < array_len; j++)
		scanf_s("%d", &d_array[j]);

	printf("The numbers that get input:\n");
	
	for (int j = 0; j < array_len; j++)
		printf("%d\n", d_array[j]);

	free(d_array);

	int matrix_2d[10][3];
	int matrix_6d[5][8][2][9][3][1];

}

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i<argc; i++)
		printf("%s", argv[i]);
	printf("\n");
	arrays();
	return 0; // OK
}