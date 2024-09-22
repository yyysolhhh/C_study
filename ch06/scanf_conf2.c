#include <stdio.h>

int main(void)
{
	float f;
	double d;

	printf("두 개의 실수 입력: ");
	scanf("%f %le", &f, &d);

	printf("출력: ");
	printf("%f %e \n", f, d);

	return 0;
}
