// Ofek Haim - 2018

#include "stdafx.h"
#include <string.h>



struct item
{
	int catalog_number;
	char name[20];
	double price;
	unsigned int count;
};

struct foo
{
	short int c;
	int m;
	int r;
};

void raise_price(struct item *p, float amount)
/*
This function get item pointer and increace 
*/
{
	p->price += amount;
}

void structs()
{
	struct item milk;
	milk.catalog_number = 0001;
	strcpy_s(milk.name, "milk 1 L");
	milk.price = 6.7;
	milk.count = 500;
	printf("You have %d pieces of '%s'(catalog number: %d).\nThe price of '%s' is %lf.\n", milk.count, milk.name, milk.catalog_number, milk.name, milk.price);

	printf("//////////////////////\n");

	struct item shoko;
	struct item *item_pointer = &shoko;
	(*item_pointer).price = 12.9;
	strcpy_s((*item_pointer).name, "Shoko");
	printf("The price of '%s' is %lf\n", (*item_pointer).name, (*item_pointer).price);

	strcpy_s(item_pointer->name, "shoko boo");
	item_pointer->price = 15.00;
	printf("The price of '%s' is %lf\n", item_pointer->name, item_pointer->price);

	printf("//////////////////////\n");

	/* An array of 30 items. */
	struct item items[30];
	/* Access the 2nd item. */
	items[1].price = 20;
	strcpy_s(items[1].name, "shoko boo+");
	printf("The price of %s is %f\n", items[1].name, items[1].price);

	printf("//////////////////////\n");

	struct item banana = { 02, "Banana", 15.1, 100 };
	struct item items_array[3] = {{ 23, "shoko", 12.90, 100 },{ 109, "roll", 5, 100 },{ 22, "kartiv", 2.3, 100 }};

	struct item x = { 23, "x", 12.90, 100 };
	struct item temp = x; // = struct item temp = {shoko.catalog_number, shoko.name, shoko.price, shoko.num};

	printf("//////////////////////\n");

	// Sem Nirdaf
	//typedef struct item store_item;
	/*
	typedef struct
	{
	  int catalog_number;
	  char name[20];
	  float price;
	  unsigned int num;
	} store_item;
	*/
	/*
	store_item shoko;
	store_item *p;
	store_item items[300];
	*/

	printf("//////////////////////\n");

	struct foo s;
	int *p_m = &s.m;
	int *p_r = &s.r;
	printf("%p\n", p_m);
	printf("%p\n", p_r);
}
int main()
{
	structs();
	return 0; // OK
}