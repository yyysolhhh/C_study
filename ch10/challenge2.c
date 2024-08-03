#include <stdio.h>

void multiply_table(int n)
{
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
}

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	if (a < b)
	{
		multiply_table(a);
		multiply_table(b);
	}
	else
	{
		multiply_table(b);
		multiply_table(a);
	}
}
