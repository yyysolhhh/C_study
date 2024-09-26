#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int a, b;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &a, &b);
	printf("%d가(이) 더 큰 수입니다.", MAX(a, b));
	return 0;
}
