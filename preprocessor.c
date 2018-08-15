// Ofek Haim - 2018

#include "stdafx.h"
#include <assert.h>

#define NUMBER 5515521
#define MY_NAME
#define F
#define MIN(a, b) a < b? a: b


#ifdef F

bool bigger_then_five(int number) {
	if (number > 5) return true;
	else return false;
}

#endif /* ifdef F */

void preprocessor()
{
	printf("NUMBER=%d\n", NUMBER);
	printf("__FILE__ = %s\n", __FILE__);
	printf("__LINE__ = %d\n", __LINE__);

	printf("///////////////\n");

	int number = 6;
	printf("%s\n", bigger_then_five(number) ? "true" : "false");
	assert(1);
	//assert(0);
	printf("After assert\n");

	if (39846754) printf("39846754\n");

}

int main()
{
	preprocessor();
	return 0; // OK
}
