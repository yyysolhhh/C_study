#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

int main(void)
{
	struct simple s = {1, 2};

	printf("address1: %p\n", &s);
	printf("address2: %p\n", &(s.data1));
	return 0;
}
