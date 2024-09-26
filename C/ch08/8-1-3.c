#include <stdio.h>

int main(void)
{
	int kor, eng, mat, sum, avg;
	
	printf("국어, 영어, 수학 점수 입력: ");
	scanf("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3;
	printf("평균 %d점: ", avg);
	if (avg >= 90)
		printf("A\n");
	else if (avg >= 80)
		printf("B\n");
	else if (avg >= 70)
		printf("C\n");
	else if (avg >= 50)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}
