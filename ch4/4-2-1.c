#include <stdio.h>

int main(void)
{
	int i, ans;

	i = 0;
	ans = 1;
	while (i < 4)
	{
		ans *= 2;
		i++;
	}
	printf("%d", ans);
	return 0;
}
