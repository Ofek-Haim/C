// Ofek Haim - 2018

#include "stdafx.h"
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
};

typedef struct node node_list;


void dynamic_memory_management()
{
	malloc(sizeof(int) * 80);
	calloc(80, sizeof(int)); // + Write '0' in the memory.

	int *numbers = (int *)malloc(10 * sizeof(int));
	if (numbers == NULL)
		printf("Error: could not allocate memory!\n");
	//printf("Prass for free memory:");
	//getchar();
	free(numbers);

	printf("////////////////////////\n");

	node_list *const l1 = (node_list *)malloc(sizeof(node_list));

	if (l1 == NULL)
		printf("Error: could not allocate memory!\n");
	l1->data = 10;

	node_list *const l2 = (node_list *)malloc(sizeof(node_list));

	if (l2 == NULL)
		printf("Error: could not allocate memory!\n");
	l2->data = 20;
	l2->next = l1;

	printf("////////////////////////\n");



	char *chars = (char *)calloc(3, sizeof(char));
	if (!chars)
		printf("Error: could not allocate memory!\n");
	
	chars[0] = 'a';
	chars[1] = 'b';
	chars[2] = 'c';

	//chars[3] = 'd'; // Error 
	//chars[4] = 'e'; // Error

	chars = (char *)realloc(chars, 5 * sizeof(char));
	if(!chars) printf("Error: could not allocate memory!\n");
	else
	{
		printf("+d +e \n");
		chars[3] = 'd';
		chars[4] = 'e';
	}

}

int main()
{
	dynamic_memory_management();
	return 0; // OK
}