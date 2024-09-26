#include <stdio.h>

void init_arr(int (*arr)[4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr[i][j] = 4 * i + j + 1;
	}
}

void print_arr(int (*arr)[4])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void rotate_arr(int (*arr)[4])
{
	int rot[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			rot[j][3 - i] = arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = rot[i][j];
		}
	}
}

int main(void)
{
	int arr[4][4];

	init_arr(arr);
	print_arr(arr);
	for (int i = 0; i < 3; i++)
	{
		rotate_arr(arr);
		print_arr(arr);
	}
	return 0;
}
