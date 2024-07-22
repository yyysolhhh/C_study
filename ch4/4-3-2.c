#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int pBinaryToDecimal(const char *binary)
{
	int i, decimal;

	decimal = 0;
	i = 0;
	while (binary[i])
	{
		decimal += (binary[i] - '0') * pow(2, 7 - i);
		i++;
	}
	return decimal;
}

int nBinaryToDecimal(const char *binary)
{
	int i, decimal, len, carry;
	char *complement;

	decimal = 0;
	len = strlen(binary);
	complement = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		complement[i] = (binary[i] == '0') ? '1' : '0';
		i++;
	}
	complement[len] = '\0';
	carry = 1;
	for (int i = len - 1; i >= 0; i--)
	{
		if (complement[i] == '1' && carry)
		{
			complement[i] = '0';
		}
		else if (complement[i] == '0' && carry)
		{
			complement[i] = '1';
			carry = 0;
		}
	}
	decimal = -1 * pBinaryToDecimal(complement);
	free(complement);
	complement = 0;
	return decimal;
}

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
