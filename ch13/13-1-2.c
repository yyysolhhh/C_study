#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	int temp;

	for (int i = 0; i < 2; i++)
	{
		temp = p[i];
		p[i] = p[4 - i];
		p[4 - i] = temp;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}

	return 0;
}
