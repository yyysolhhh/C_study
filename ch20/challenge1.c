#include <stdio.h>

int main(void)
{
	int arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = 4 * i + j + 1;
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j >= 0; j--)
		{
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 3; j >= 0; j--)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
