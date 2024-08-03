#include <stdio.h>

int sum(int amount)
{
	static int sum;

	sum += amount;
	return sum;
}

int main(void)
{
	int amount;

	while (1)
	{
		printf("저금할 금액: ");
		scanf("%d", &amount);
		if (amount == -1)
			break;
		printf("현재까지의 입금액 %d원\n", sum(amount));
	}
	printf("입금 완료\n");
	return 0;
}
