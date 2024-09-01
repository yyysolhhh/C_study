#include <stdio.h>
#include <string.h>

int is_digit(int c)
{
	return '0' <= c && c <= '9';
}

int main(void)
{
	char str[50];
	int sum = 0;
	int i;

	fgets(str, sizeof(str), stdin);
	i = 0;
	while (str[i])
	{
		if (is_digit(str[i]))
			sum += str[i] - '0';
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
