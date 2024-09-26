#include <stdio.h>

int main(void)
{
	int a[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			a[i][j] = 10 * i + j;
			printf("%2d ", a[i][j]);
			printf("%2d ", *(a[i] + j));
			printf("%2d ", (*(a + i))[j]);
			printf("%2d", *(*(a + i) + j));
			printf("/");
		}
		printf("\n");
	}
	printf("\n");

	printf("%d\n", a[1][5]);
	printf("%d\n", *(a[1] + 5));
	printf("%d\n", (*(a + 1))[5]);
	printf("%d\n", *(*(a + 1) + 5));

	return 0;
}
