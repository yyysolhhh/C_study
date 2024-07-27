#include <stdio.h>

int main(void)
{
	int n, fac;

	for ( ; ; )
	{
		scanf("%d", &n);
		fac = 1;
		for (int i = 1; i <= n; i++)
		{
			fac *= i;
		}
		printf("%d\n", fac);
	}
	return 0;
}
