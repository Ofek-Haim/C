// Ofek Haim - 2018

#include "stdafx.h"

void mathematical_operations()
{
	int x = 4, y = 2;

	// Prints x + y = 6
	printf("x + y = %d\n", x + y);

	// Prints x - y = 2
	printf("x - y = %d\n", x - y);

	// Prints x * y = 8
	printf("x * y = %d\n", x * y);

	// Prints x / y = 2
	printf("x / y = %d\n", x / y);

	// Prints x % y = 0
	printf("x %% y = %d\n", x % y);

	x = 10;
	y = 10;
	int z = 10, w = 10, p = 10;
	/* x = x + 1 */
	x += 1;

	/* y = y - 3 */
	y -= 3;

	/* z = z * 8 */
	z *= 8;

	/* w = w / 4 */
	w /= 4;

	/* p = p % 2 */
	p %= 2;

	printf("x= %d\n", x);
	printf("y= %d\n", y);
	printf("z= %d\n", z);
	printf("w= %d\n", w);
	printf("p= %d\n", p);


	int number = 10;
	printf("\nnumber=%d\n", number);
	number++;
	printf("number=%d\n", number);
	number--;
	printf("number=%d\n", number);

	int r=3, j=0 ;
	j = r++;
	printf("j= %d\n", j);
	r = 3, j = 0;
	j = --r;
	printf("j= %d\n", j);

	int n1 = 2, n2 = 3;

	double c, f;
	printf("The average is %f\n", (n1 + n2) / 2.0);
	printf("Enter degrees in Celsius: ");
	scanf_s("%lf", &c);
	f = 1.8 * c + 32;
	printf("This is %lf in Fahrenheit\n", f);

	printf("%lf\n",(9 / 5.5));
	printf("%d\n", (9 / 5));
	
	//casting
	char x = 3;
	int y = x;
}

int main()
{
	mathematical_operations();
	return 0; // OK
}
