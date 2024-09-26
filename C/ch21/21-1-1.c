#include <stdio.h>

char to_uppercase(int c)
{
	return c - 32;
}

char to_lowercase(int c)
{
	return c + 32;
}

int is_lowercase(int c)
{
	return 'a' <= c && c <= 'z';
}

int is_uppercase(int c)
{
	return 'A' <= c && c <= 'Z';
}

int main(void)
{
	int c;

	printf("문자 입력: ");
	c = getchar();
	if (!is_lowercase(c) && !is_uppercase(c))
	{
		printf("잘못된 입력!\n");
		return -1;
	}
	else if (is_lowercase(c))
		putchar(to_uppercase(c));
	else
		putchar(to_lowercase(c));
	return 0;
}
