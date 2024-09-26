#include <stdio.h>

size_t str_len(char *str)
{
	size_t len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char *rev_str(char *str, int len)
{
	char c;

	for (int i = 0; i < len / 2; i++)
	{
		c = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = c;
	}
	return str;
}

int main(int ac, char **av)
{
	int len;
	char *rev;

	if (ac < 2)
		return 1;
	len = str_len(av[1]);
	rev = rev_str(av[1], len);
	printf("%s\n", rev);
	return 0;
}
