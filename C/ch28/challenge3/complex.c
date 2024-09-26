#include <stdio.h>
#include "complex.h"

void print_result(t_complex result)
{
	printf("실수부: %lf, 허수부: %lf\n", result.real, result.imaginary);
}

int main(void)
{
	t_complex comp1, comp2;

	printf("복소수 입력1(실수 허수): ");
	scanf("%lf %lf", &comp1.real, &comp1.imaginary);
	printf("복소수 입력2(실수 허수): ");
	scanf("%lf %lf", &comp2.real, &comp2.imaginary);

	printf("합 -> ");
	print_result(add(comp1, comp2));
	printf("곱 -> ");
	print_result(multiply(comp1, comp2));
	return 0;
}
