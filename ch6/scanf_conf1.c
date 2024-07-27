#include <stdio.h>

int main(void)
{
	int i, j, k, x;

	printf("세 개의 정수 입력: ");
	scanf("%d %o %x %X", &i, &j, &k, &x);

	printf("출력: ");
	printf("%d %d %d %d \n", i, j, k, x);

	return 0;
}
