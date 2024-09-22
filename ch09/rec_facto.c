#include <stdio.h>

int f(int n);

int main(void)
{
	int val;
	int result;

	printf("정수 입력: ");
	scanf("%d", &val);
	if (val < 0)
	{
		printf("0 이상을 입력해야 합니다. \n");
		return 1;
	}
	result = f(val);
	printf("%d!의 계산 결과: %d\n", val, result);
	return 0;
}

int f(int n)
{
	if (n == 0)
		return 1;
	else
		return n * f(n - 1);
}
