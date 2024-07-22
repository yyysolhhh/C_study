#include <stdio.h>

int main(void)
{
	for (int i = 5; i <= 18; i++)
	{
		printf("%d 8진수: 0%o, 0%O\n", i, i, i);
	}
	return 0;
}
