#include <stdio.h>

int main(void)
{
	int arr[9];
	int num;

	scanf("%d", &num);
	for (int i = 0; i < 9; i++)
	{
		arr[i] = num * (i + 1);
	}
	for (int i = 1; i < 9; i += 2)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
