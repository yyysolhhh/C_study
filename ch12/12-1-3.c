#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int *p1 = &a, *p2 = &b;

	(*p1)--;
	(*p2)--;
	p1 = &b;
	p2 = &a;

	printf("*p1: %d, *p2: %d\n", *p1, *p2);
	return 0;
}
