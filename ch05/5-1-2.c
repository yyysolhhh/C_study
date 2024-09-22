#include <stdio.h>

int main(void)
{
	double a, b;

	scanf("%lf %lf", &a, &b);
	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	return 0;
}
