#include <stdio.h>

int main(void)
{
	int i, byte;
	long ans;

	byte = 4;
	ans = 1;
	i = 0;
	while (i < byte * 8)
	{
		ans *= 2;
		i++;
	}
	printf("%d^%d가지 %ld", 2, byte * 8, ans);
	return 0;
}
