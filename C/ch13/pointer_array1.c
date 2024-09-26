#include <stdio.h>

int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};

	printf("%d, %d \n", a[0], a[1]);
	printf("%p, %p \n", &a[0], &a[1]);
	printf("배열 이름: %p \n", a);
	return 0;
}
