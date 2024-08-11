#include <stdio.h>

int main(void)
{
	int a = 2005;
	int* pA = &a;

	printf("pA: %d \n", pA);
	printf("&a: %d \n", &a);

	printf("pA: %p \n", pA);
	printf("&a: %p \n", &a);

	(*pA)++;

	printf("a: %d \n", a);
	printf("*pA: %d \n", *pA);

	return 0;
}
