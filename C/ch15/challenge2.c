#include <stdio.h>

void binary(int num)
{
	int i = 31;

	while ((num >> i & 1) == 0)
	{
		i--;
	}

	printf("0b");
	while (i >= 0)
	{
		printf("%d", num >> i & 1);
		i--;
	}
}

int main(void)
{
	int num;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);
	binary(num);
	return 0;
}
