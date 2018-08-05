// Ofek Haim - 2018

#include "stdafx.h"

void loops()
{
	double fahrenheit;
	for (int celsius = 0; celsius <= 20; celsius += 2)
	{
		fahrenheit = 1.8 * celsius + 32;
		printf("%d in Celsius is %lf in Fahrenheit\n", celsius, fahrenheit);
	}

	printf("///////////////////////\n");

	int i = 1;
	while (i <= 20)
	{
	printf("i = %d\n", i);
	i++;
	}

	printf("///////////////////////\n");
	
	i = 1;
	do {
		printf("i = %d\n", i);
		i++;
	} while (i <= 20);

	printf("///////////////////////\n");
	
	i = 1;
	while (i != 8)
	{
		if (i == 4)
			break;
		printf("%d\n", i);
		i++;
	}

	printf("///////////////////////\n");

	i = 1;
	while (i != 8)
	{
		if (i == 4) 
		{
		i++;
		continue;
		}
		printf("%d\n", i);
		i++;
	}
}

int main()
{
	loops();
	return 0; // OK
}
