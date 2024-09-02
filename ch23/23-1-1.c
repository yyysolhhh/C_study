#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void swap(struct simple *s1, struct simple *s2)
{
	struct simple temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void show(struct simple ts)
{
	printf("data1: %d, data2: %d\n", ts.data1, ts.data2);
}

int main(void)
{
	struct simple s1 = {1, 2};
	struct simple s2= {3, 5};

	show(s1);
	show(s2);
	swap(&s1, &s2);
	show(s1);
	show(s2);
	
	return 0;
}
