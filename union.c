// Ofek Haim - 2018

#include "stdafx.h"
#include <string.h>


union object
{
	int number;
	char string[20];
};

typedef union object un_obj;

struct union_struct
{
	bool is_number;
	un_obj uo;
};


void unions()
{
	un_obj u;
	u.number = 20;
	printf("Number = %d\n", u.number);
	strcpy_s(u.string, "Ofek Haim");
	printf("String = %s\n", u.string);
	printf("Number = %d\n", u.number);
	
	printf("///////////////////////\n");

	struct union_struct s;
	s.uo = u;
	s.is_number = false;
	if (!s.is_number) printf("String = %s\n", u.string);
	s.is_number = true;
	s.uo.number = 50;
	if (!s.is_number) printf("String = %s\n", u.string);
	if(s.is_number) printf("Number = %d\n", s.uo.number);

}

int main()
{
	unions();
	return 0; // OK
}