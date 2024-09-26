#include <stdio.h>

void fct3(int **ptr1, int *(*ptr2)[5])
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

void fct4(int ***ptr1, int ***(*ptr2)[5])
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

int main(void)
{
	int* arr5[3];
	int* arr6[3][5];

	int** arr7[3];
	int*** arr8[3][5];

	fct3(arr5, arr6);
	fct4(arr7, arr8);

	return 0;
}
