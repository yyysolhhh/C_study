#include <stdio.h>

int main(void)
{
	int n, i;

	scanf("%d", &n);
	i = 9;
	while (i > 0)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i--;
	}
	return 0;
}
