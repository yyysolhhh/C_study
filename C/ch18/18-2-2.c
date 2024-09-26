#include <stdio.h>

void fct1(int *ptr1, int *ptr2)
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

void fct2(int (*ptr3)[4], int (*ptr4)[4])
{
	printf("%d, %d\n", ptr3, ptr4);
	printf("%d, %d\n", ptr3 + 1, ptr4 + 1);
}

int main(void)
{
	int arr1[3];
	int arr2[4];

	int arr3[3][4];
	int arr4[2][4];

	fct1(arr1, arr2);
	fct2(arr3, arr4);

	return 0;
}
