// Ofek Haim - 2018

#include "stdafx.h"


void input_and_output()
{
	printf("Output text\n");
	int number = 300;
	printf("Number = %d\n", number);
	// Look -> Appendices/Print typs.png

	//%[width]<specifier>
	printf("%10d\n", 3);
	printf("%8d\n", 3);
	printf("%6d\n", 3);
	printf("%4d\n", 3);
	printf("%2d\n", 3);
	printf("%10s", "Text\n");

	//%[.precision]<specifier>
	printf("%.3f\n", 3.14159265);
	printf("%.4f\n", 3.14159265);
	printf("%.5f\n", 3.14159265);
	printf("%.3f\n", 3.1);
	printf("%.3s\n", "Hello");

	//%[width][.precision]<specifier>
	printf("%10.3f\n", 3.14159265);
	printf("%10.3f\n", 3.1);
	printf("%10.3s\n", "Hello");


	char first_letter;
	int phone;
	printf("Please enter a first character of your name:");
	scanf_s("%c", &first_letter);
	printf("Please enter your phone number:");
	scanf_s("%d", &phone);
	printf("first_letter = %c\n", first_letter);
	printf("phone = %d\n", phone);

	int input_number;
	printf("Enter a number:");
	scanf_s("%d", &input_number);
	printf("input_number = %d\n\n", input_number);

	int num;
	printf("Enter a number:");
	int get_input = scanf_s("%3d", &num);
	printf("The three firs number of the input is: %d\n", num);
	printf("Get input = %d\n", get_input);
}

int main()
{
	input_and_output();
    return 0; // OK
}