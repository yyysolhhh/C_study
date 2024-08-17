#include <stdio.h>

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
	int arr[7];
	int size;
	int n;

	size = 7;
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &n);
		arr[i] = n;
	}
	des_bubblesort(arr, size);
	print_arr(arr, size);
	return 0;
}
