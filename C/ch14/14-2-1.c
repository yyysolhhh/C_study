#include <stdio.h>

void print(const int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	print(arr, 5);
	printf("\n배열 요소 값 바꾸면 안되기 때문\n");
	return 0;
}
