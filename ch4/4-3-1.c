#include <stdio.h>

int main(int ac, char **av)
{
	int i, len, pos, ans, temp;

	len = ac - 1;
	ans = 0;
	while (len)
	{
		i = 0;
		while (av[len][i])
		{
			temp = 1;
			pos = 7 - i;
			while (pos > 0)
			{
				temp *= 2;
				pos--;
			}
			ans += (av[len][i] - '0') * temp;
			i++;
		}
		printf("%d\n", ans);
		len--;
	}
	return 0;
}
