#include <stdio.h>

int main(void)
{
	int arr[10];
	int n, f, b;

	printf("총 10개의 숫자 입력\n");
	f = 0, b = 9;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 1)
		{
			arr[f] = n;
			f++;
		}
		else
		{
			arr[b] = n;
			b--;
		}
	}
	printf("배열 요소의 출력: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
