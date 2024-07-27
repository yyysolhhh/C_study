#include <stdio.h>

int main(void)
{
	int n, sum;

	sum = 0;
	while (1)
	{
		scanf("%d", &n);
		if (!n)
			break;
		sum += n;
	}
	printf("%d", sum);
	return 0;
}
