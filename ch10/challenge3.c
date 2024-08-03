#include <stdio.h>

int get_gcm1(int a, int b)
{
	int min;

	min = (a < b)? a : b;
	for (int i = min; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
	return 1;
}

// Euclidean algorithm
int get_gcm2(int a, int b)
{
	return b ? get_gcm2(b, a % b) : a;
}

int main(void)
{
	int a, b;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &a, &b);
	printf("GCM1: %d\n", get_gcm1(a, b));
	printf("GCM2: %d\n", get_gcm2(a, b));
	return 0;
}
