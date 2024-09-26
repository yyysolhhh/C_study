#include <stdio.h>

void function(int);

int main(void)
{
	int m = 0;
	scanf("%d", &m);
	function(m);
	return 0;
}

void function(int i)
{
	int array[i];

	printf("%d", array[0]);
}
