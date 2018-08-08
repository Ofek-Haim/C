// Ofek Haim - 2018

#include "stdafx.h"
#include <string.h>

void strings()
{
	char string[10] = {'T', 'e', 'x', 't', 0};
	char my_string[] = "Some text";

	char gm[] = "Good morning!";
	printf("The len of '%s' is: %d.\n", gm, strlen(gm));

	/*
	char source[] = "Shalom";
	char dest[] = source; // ERROR!
	*/

	char gm2[] = "GM2";
	strcpy_s(gm, gm2);
	printf("The len of '%s' is: %d.\n", gm, strlen(gm));

	char front[20] = "front ";
	char back[20] = "back";
	printf("front: %s\n", front);
	printf("back: %s\n", back);
	strcat_s(front, back);
	printf("front: %s\n", front);
	printf("back: %s\n", back);

	printf("/////////////////////////\n\n");
	char my_name[] = "Ofek Haim";
	puts(my_name);
	

	char name[10];
	printf("Please enter your name:");
	//scanf_s("%[^\n]%*c", name); // Can not run this command on my platform. 
	fgets(name, 10, stdin);
	printf("Your name is %s\n", name);

}

int main()
{
	strings();
	return 0; // OK
}