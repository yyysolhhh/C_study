#include <stdio.h>

int main(void)
{
	int i, num, sum;

	sum = 0;
	i = 1;
	while (i <= 5)
	{
		num = -1;
		while (num <= 0)
		{
			printf("0보다 큰 수를 입력(%d변째): ", i);
			scanf("%d", &num);
		}
		sum += num;
		i++;
	}
	printf("입력된 값의 총 합: %d", sum);
	return 0;
}
