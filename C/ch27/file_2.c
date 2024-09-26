#include <stdio.h>

extern int i;

int main()
{
	i++;
	printf("%d+\n", i);
	return 0;
}
