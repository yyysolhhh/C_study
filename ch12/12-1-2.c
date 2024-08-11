#include <stdio.h>

int main(void)
{
	char a = 'a';
	int b = 1;
	float c = 1.3f;
	double d = 3.5;

	char *p1 = &a;
	int *p2 = &b;
	float *p3 = &c;
	double *p4 = &d;

	printf("%c\n", ++(*p1));
	printf("%d\n", ++(*p2));
	printf("%f\n", ++(*p3));
	printf("%f\n", ++(*p4));

	return 0;
}
