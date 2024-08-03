#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

int main(void)
{
	int a, b, cnt;

	cnt = 0;
	while (1)
	{
		printf("두 개의 숫자 입력: ");
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("연산 결과: %d\n", multiply(a, b));
		cnt++;
	}
	printf("총 %d번 연산함", cnt);
	return 0;
}
