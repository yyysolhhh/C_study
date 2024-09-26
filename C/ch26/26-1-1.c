#include <stdio.h>

#define ADD(x, y, z) (x) + (y) + (z)
#define MULTIPLE(x, y, z) (x) * (y) * (z)

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", ADD(a, b, c));
	printf("%d\n", MULTIPLE(a, b, c));
	return 0;
}
