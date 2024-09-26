#include <stdio.h>

void print(const int* ptr)
{
	printf("%d \n", *ptr);
//	int *p = ptr;
//	*p = 20;
}

int main(void)
{
	int a = 10;
	int *p = &a;
	print(p);
	return 0;
}
