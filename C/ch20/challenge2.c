#include <stdio.h>
#include <stdlib.h>

void free_all(int n, int **arr)
{
	if (arr)
	{
		for (int i = 0; i < n; i++)
			free(arr[i]);
		free(arr);
	}
}

int **init_arr(int n)
{
	int **arr;

	arr = (int **)malloc(sizeof(int *) * n);
	if (!arr)
		return NULL;
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * n);
		if (!arr[i])
		{
			free_all(i, arr);
			return NULL;
		}
		for (int j = 0; j < n; j++)
			arr[i][j] = 0;
	}
	return arr;
}

void print_arr(int n, int **arr)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}

void snail_arr(int n, int **arr)
{
	int num = 1, sign = 1;
	int x = 0, y = -1;
	int size = n;

	while (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			y += sign;
			arr[x][y] = num++;
		}
		for (int i = 0; i < size - 1; i++)
		{
			x += sign;
			arr[x][y] = num++;
		}
		size--;
		sign *= -1;
	}
}

int main(void)
{
	int **arr;
	int n;

	printf("숫자를 입력하시오: ");
	scanf("%d", &n);
	arr = init_arr(n);
	if (!arr)
	{
		printf("메모리 할당 실패\n");
		return 1;
	}
	snail_arr(n, arr);
	print_arr(n, arr);
	free_all(n, arr);
	return 0;
}
