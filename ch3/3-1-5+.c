#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a, b, c, result;

	printf("%d\n", argc);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	result = (a - b) * (b + c) * (c % a);
	printf("%d", result);
	return 0;
}
