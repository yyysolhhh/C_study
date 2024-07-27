#include <stdio.h>

int main(void)
{
	int n, i;

	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		printf("%d ", 3 * i);
		i++;
	}
	return 0;
}
