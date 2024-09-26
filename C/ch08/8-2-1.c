#include <stdio.h>

int main(void)
{
	int i, j;

	i = 2;
	while (1)
	{
		if (i > 8)
			break;
		if (i % 2 == 0)
		{
			j = 1;
			while (1)
			{
				if (j > i)
					break;
				printf("%d * %d = %d\n", i, j, i * j);
				j++;
			}
		}
		i++;
	}
	return 0;
}

//int main(void)
//{
//	for (int i = 2; i < 9; i += 2)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//	}
//	return 0;
//}
