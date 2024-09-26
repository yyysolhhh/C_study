#include <stdio.h>

int main(void)
{
	for (int i = 8; i <= 20; i++)
	{
		printf("%d 2진수: 0b", i);
		for (int j = 4; j >= 0; j--)
		{
			printf("%d", ((i >> j) &0x01));
		}
		printf(" 16진수: 0x%x, 0x%X\n", i, i);
	}
	return 0;
}
