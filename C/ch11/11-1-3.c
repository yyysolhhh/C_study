#include <stdio.h>

int main(void)
{
	char letter[26];

	for (int i = 0; i < 26; i++)
	{
		letter[i] = i + 'A';
		printf("%c ", letter[i]);
	}
	return 0;
}
