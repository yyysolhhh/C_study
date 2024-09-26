#include <stdio.h>

int main(void)
{
	int n = 10;
	int *p1 = &n;
	int *p2 = p1;

	printf("%d \n", (*p1)++); // 10
	printf("%d \n", (*p2)++); // 11
	printf("%d \n", n); //12
	return 0;
}
