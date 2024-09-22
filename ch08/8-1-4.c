#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", (a - b < 0)? b - a : a - b);
	return 0;
}
