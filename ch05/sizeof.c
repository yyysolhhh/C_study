#include <stdio.h>

int main(void)
{
	char c = 10;
	int i = 3048;
	double f = 3.1415;

	printf("변수 c의 크기: %lu\n", sizeof c);
	printf("변수 i의 크기: %lu\n", sizeof i);
	printf("변수 f의 크기: %lu\n", sizeof f);

	printf("char 할당 메모리: %lu\n", sizeof(char));
	printf("int 할당 메모리: %lu\n", sizeof(int));
	printf("double 할당 메모리: %lu\n", sizeof(double));
	printf("long 할당 메모리: %lu\n", sizeof(long));
	printf("long long 할당 메모리: %lu\n", sizeof(long long));

	printf("float 할당 메모리: %lu\n", sizeof(float));
	printf("double 할당 메모리: %lu\n", sizeof(double));
	return 0;
}
