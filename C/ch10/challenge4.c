#include <stdio.h>

int main(void)
{
	const int cream = 500, shrimp = 700, coke = 400;
	int money;

	money = 3500;
	printf("현재 당신이 소유하고 있는 금액: %d\n", money);
	for (int n_cr = 1; n_cr * cream <= money; n_cr++)
	{
		for (int n_sh = 1; n_sh * shrimp <= money; n_sh++)
		{
			for (int n_co = 1; n_co * coke <= money; n_co++)
			{
				if (n_cr * cream + n_sh * shrimp + n_co * coke == money)
					{
						printf("크림빵(%d개), 새우깡(%d봉지), 콜라(%d병)\n", n_cr, n_sh, n_co);
						break;
					}
			}
		}
	}
	printf("골라");
	return 0;
}
