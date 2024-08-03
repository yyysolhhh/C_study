#include <stdio.h>

int recursive_square(int n)
{
	if (n == 0)
		return 1;
	return recursive_square(n - 1) * 2;
}

int main(void)
{
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);

	printf("2의 %d승은 %d", n, recursive_square(n));
	return 0;
}
