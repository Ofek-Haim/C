// Ofek Haim - 2018

#include "stdafx.h"
#pragma warning (disable : 4996)
#include <stdio.h>

void input_and_output_files()
{

	FILE *f = fopen("P:\ofek.txt", "wt");
	if (!f) printf("Couldn't open file\n");
	else printf("The file was open\n");

	int c = fprintf_s(f, "This line will be written to the file.\n");
	if (c < 0)
		printf("Error to weite!");
	fclose(f); // This command close the file object.

	f = fopen("P:\ofek.txt", "rt");
	char file_data[100];
	fgets(file_data, 99, f);
	printf("The data of the file =%s", file_data);
	fclose(f); // This command close the file object.

	fprintf(stdout, "Hello world\n");
	//fprintf(stderr, "Error\n");

	f = fopen("P:\ofek.txt", "rt");
	char file_data_2[100];
	int pos = ftell(f);
	printf("Pos =%d\n", pos);
	fseek(f, 2L, SEEK_CUR);
	pos = ftell(f);
	printf("Pos =%d\n", pos);
	fgets(file_data_2, 99, f);
	printf("The data of the file =%s", file_data_2);
	pos = ftell(f);
	printf("Pos =%d\n", pos);
	fclose(f); // This command close the file object.
}

int main()
{
	input_and_output_files();
	return 0; // OK
}
