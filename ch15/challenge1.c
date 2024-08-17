#include <stdio.h>

void print_odd(int *arr)
{
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}
}

void print_even(int *arr)
{
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
}

int main(void)
{
	int arr[10];
	printf("총 10개의 숫자 입력: \n");
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	print_odd(arr);
	printf("\n");
	print_even(arr);
	return 0;
}
