#include <stdio.h>

int main(void)
{
	int n, i, d;
	double sum, avg;
	
	printf("입력할 정수의 개수: ");
	scanf("%d", &n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		printf("정수 입력: ");
		scanf("%d", &d);
		sum += d;
		i++;
	}
	avg = sum / n;
	printf("입력의 평균: %f", avg);
	return 0;
}
