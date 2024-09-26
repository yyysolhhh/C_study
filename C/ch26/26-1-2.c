#include <stdio.h>

#define PI 3.1415
#define AREA(r) PI * (r) * (r)

int main(void)
{
	double r;

	printf("원의 반지름을 입력하세요: ");
	scanf("%lf", &r);
	printf("원의 넓이는 %f입니다.", AREA(r));
	return 0;
}
