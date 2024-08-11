#include <stdio.h>

int square1(int a)
{
	return a * a;
}

void square2(int *a)
{
	*a *= *a;
}

int main(void)
{
	int a;

	scanf("%d", &a);

	printf("%d\n", square1(a));
	square2(&a);
	printf("%d\n", a);
	
	return 0;
}
