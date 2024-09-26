#include <stdio.h>

int main(int ac, char *av[])
{
	char ans;
	int i;

	if (ac < 2)
		return 1;
	ans = 0;
	i = 0;
	while (av[1][i])
	{
		if (ans < av[1][i])
			ans = av[1][i];
		i++;
	}
	printf("%c", ans);
	return 0;
}
