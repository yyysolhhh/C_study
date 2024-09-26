#include <stdio.h>

int main(void)
{
	int a, positive;

	scanf("%d", &a);
	positive = ~a;
	positive += 1;
	printf("%d", positive);
	return 0;
}
