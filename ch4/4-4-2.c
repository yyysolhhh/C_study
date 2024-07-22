#include <stdio.h>
#include <math.h>

int main(void)
{
	int a;

	scanf("%d", &a);
	// a <= -1073741825 || a >= 1073741824
	if (a <= -pow(2, 30) - 1 || a >= pow(2, 30))
		printf("invalid input\n");
	else
		printf("%d", a << 1);
	return 0;
}
