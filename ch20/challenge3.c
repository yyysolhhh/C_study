#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int randnum;

	for (int i = 0; i < 5; i++)
	{
		randnum = rand() % 100;
		printf("%d\n", randnum);
	}
	return 0;
}
