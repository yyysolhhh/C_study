#include <stdio.h>

int main(void)
{
	int a, b, c, result;

	scanf("%d %d %d", &a, &b, &c);
	result = (a - b) * (b + c) * (c % a);
	printf("%d", result);
	return 0;
}