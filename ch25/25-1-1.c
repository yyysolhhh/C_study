#include <stdio.h>

void func1(int);
void func2(int);

int main(void)
{
	int arg = 10;

	func1(arg);
	return 0;
}

void func1(int a)
{
	printf("a: %d\n", a);
	func2(a);
}

void func2(int b)
{
	int c = b;

	printf("c: %d b: %d\n", c, b);
}
