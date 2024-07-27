#include <stdio.h>

int main(void)
{
	int a, b, sum;

	scanf("%d %d", &a, &b);
//	sum = 0;
//	for (int i = a; i <= b; i++)
//	{
//		sum += a;
//	}
	for (sum = 0; a <= b; a++)
	{
		sum += a;
	}
	printf("%d", sum);
	return 0;
}
