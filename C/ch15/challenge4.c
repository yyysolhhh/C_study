#include <stdio.h>

int get_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
}

int is_palindrome(char *str, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
			return 0;
	}
	return 1;
}

int main(int ac, char **av)
{
	int len;

	if (ac < 2)
	{
		printf("문자열을 입력하세요.\n");
		return 1;
	}
	len = get_len(av[1]);
	if (is_palindrome(av[1], len))
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");
	return 0;
}
