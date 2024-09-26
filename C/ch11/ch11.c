#include <stdio.h>

int main(void)
{
	char str[100] = "hello!";

	str[99] = '!';
	printf("%s \n", str);
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
			printf("\\0 ");
		else
			printf("%c ", str[i]);
	}
	return 0;
}
