#include <stdio.h>

int main(void)
{
	int floor[5];
	int sum;

	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &floor[i]);
		sum += floor[i];
	}
	printf("%d", sum);
	return 0;
}
