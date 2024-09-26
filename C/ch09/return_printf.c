#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	a = printf("12345 \n");
	b = printf("I love my home \n");

	printf("%d %d \n", a, b); // 반환 값 출력
	return 0;
}
