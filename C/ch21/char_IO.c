#include <stdio.h>

int main()
{
	char ch = 0;

	while (ch != 'q')
	{
		ch = getchar(); // fgetc(stdin)와 같음
		putchar(ch); // fputc(ch, stdout)과 같음
	}
	return 0;
}
