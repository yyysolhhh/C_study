#include <stdio.h>

void max_min(int *arr, int **max, int **min)
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > **max)
			*max = &arr[i];
		if (arr[i] < **min)
			*min = &arr[i];
	}
}

int main(void)
{
	int arr[5];
	int *max, *min;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	max = arr;
	min = arr;
	max_min(arr, &max, &min);
	printf("max: %d\nmin: %d\n", *max, *min);
	return 0;
}
