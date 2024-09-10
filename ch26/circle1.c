#include <stdio.h>

#define PI 3.1415

int main(void)
{
	double area;
	double radius;

	fputs("반지름: ", stdout);
	scanf("%lf", &radius);

	area = radius * radius * PI;
	printf("넓이는 %f입니다\n", area);

	return 0;
}
