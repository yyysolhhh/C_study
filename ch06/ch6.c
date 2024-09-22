#include <stdio.h>

int main(void)
{
	double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	//printf("%d");

	printf("%g\n", d1);
	printf("%G\n", d2);
	printf("%g\n", d3);
	printf("%G\n", d4);

	return 0;
}
