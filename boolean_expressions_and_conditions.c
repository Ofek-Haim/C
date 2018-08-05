// Ofek Haim - 2018

#include "stdafx.h"

void boolean_expressions_and_conditions()
{
	int number;
	printf("Enter a number:");
	scanf_s("%d", &number);
	//printf("number = %d\n", number);
	if (number == 10)
		printf("number(%d) = 10\n", number);
	else if (number < 10)
		printf("number(%d) < 10\n", number);
	else if (number > 10)
		printf("number(%d) > 10\n", number);

	if (5 == 55) printf("5 == 5");
	else 
		printf("Get false from the condition above!!!\n");
		printf("Get false from the condition above!!!\n");

	// <condition> ? <true_value> : <false_value>
	5 == 5 ? printf("T\n") : printf("F\n");
	int t = 5 == 3 ? 1 : 2;
	printf("t = %d\n", t);
	printf("%s is the winner\n", 6 > 5 ? "moshe" : "yaakov");
	int switch_number = 10;
	switch (switch_number)
	{
	case 10: // Must be const (For example 5 or const int = 60)
		printf("switch_number = 10\n");
		break;
	case 20:
		printf("switch_number = 20\n");
		break;
	default:
		printf("switch_number = %d\n", switch_number);
	}
	int x = 40;
	if (x <= 30) printf("x<=30\n");
	if (x >= 30) printf("x>=30\n");

	if (5 == 3 || 5 == 5) printf("T || \n");
	if (4 == 4 && 5 == 5) printf("T && \n");

	if (!false) printf("!false = true\n");
		
}	

int main()
{
	boolean_expressions_and_conditions();
	return 0; // OK
}
