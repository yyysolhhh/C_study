#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int* p = arr;

	for (int i = 0; i < 5; i++)
	{
		*(p + i) += 2;
		printf("%d ", *(p + i));
	}
	return 0;
}
