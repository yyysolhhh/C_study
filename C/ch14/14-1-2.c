#include <stdio.h>

void swap(int *a, int *b, int *c)
{
	int temp;

	temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;

	swap(&a, &b, &c);
	printf("a: %d, b: %d, c: %d", a, b, c);

	return 0;
}
