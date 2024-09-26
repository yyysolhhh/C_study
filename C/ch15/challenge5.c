#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void des_bubblesort(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int main(void)
{
	int *arr;
	int size;

	size = 7;
	if (!(arr = (int *)malloc(sizeof(int) * size)))
		return 1;
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	des_bubblesort(arr, size);
	print_arr(arr, size);
	free(arr);
	arr = 0;
	return 0;
}
