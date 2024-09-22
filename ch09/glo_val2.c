#include <stdio.h>

int val = 0;

void fct(void);

int main(void)
{
	val = 10;
	printf("val: %d\n", val);

	fct();
	printf("val: %d\n", val);

	return 0;
}

void fct(void)
{
	int val = 20;
	val++;
}
