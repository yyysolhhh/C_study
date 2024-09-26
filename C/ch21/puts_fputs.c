#include <stdio.h>

int main(void)
{
	fputs("fputs 함수에 의한 출력, ", stdout);
	fputs("I Love Linux ", stdout);
	fputs("\n", stdout);

	puts("fputs 함수에 의한 출력, ");
	puts("I Love Linux ");

	return 0;
}
