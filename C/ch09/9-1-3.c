#include <stdio.h>

void print_fibonacci(int num, int *fib)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", fib[i]);
	}
}

void fibonacci(int num)
{
	int fib[num];

	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i < num; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	print_fibonacci(num, fib);
}

int main(void)
{
	int num;

	scanf("%d", &num);
	fibonacci(num);
	return 0;
}
