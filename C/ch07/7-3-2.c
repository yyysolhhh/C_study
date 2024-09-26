#include <stdio.h>

int main(void)
{
	int sum, i;

	sum = 0;
	i = 2;
	do
	{
		sum += i;
		i += 2;
	} while (i <= 100);
	printf("%d", sum);
	return 0;
}
