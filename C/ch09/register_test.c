#include <stdio.h>

int main(void)
{
	int a = 1;
	register int b = 1;
	printf("%p %p", &a, &b);
	return 0;
}
