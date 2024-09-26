#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (10 * a + b + 10 * b + a == 99)
			{
				printf("a: %d, b: %d, %d%d + %d%d = 99\n", a, b, a, b, b, a);
			}
		}
	}
	return 0;
}
