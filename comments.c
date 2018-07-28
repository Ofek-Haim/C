// Ofek Haim - 2018

#include "stdafx.h"

void comments() /* This is a comment.*/
/* This is a comment, but
it is not limited to a single line. It spans
multiple lines. */
{
	// This is a new-style single line comment by C99.
	printf("comments\n");
}

int main()
{
	comments();
    return 0; // OK
}

