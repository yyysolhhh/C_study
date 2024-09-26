#include <stdio.h>

int max_val(int a, int b, int c)
{
	if (a < b)
	{
		if (b < c)
			return c;
		else
			return b;
	}
	else
	{
		if (a < c)
			return c;
		else
			return a;
	}
}

int min_val(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main(void)
{
	int a, b, c;
	int max, min;

	scanf("%d %d %d", &a, &b, &c);
	max = max_val(a, b, c);
	min = min_val(a, b, c);
	printf("max: %d, min: %d\n", max, min);
	return 0;
}
