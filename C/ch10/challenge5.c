#include <stdio.h>

int is_prime(int num)
{
	if (num <= 1)
		return 0;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int num, cnt;

	num = 2;
	cnt = 0;
	while (cnt < 10)
	{
		if (is_prime(num))
		{
			printf("%d ", num);
			cnt++;
		}
		num++;
	}
	return 0;
}
