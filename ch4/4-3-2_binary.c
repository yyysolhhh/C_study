#include <stdio.h>
#include "binary_4-3.h"

int main(int ac, char **av)
{
	int cnt, binary;

	cnt = 1;
	while (cnt < ac)
	{
		if (av[cnt][0] == '1')
			binary = nBinaryToDecimal(av[cnt]);
		else
			binary = pBinaryToDecimal(av[cnt]);
		printf("%d\n", binary);
		cnt++;
	}
	return 0;
}
