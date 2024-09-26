#include <stdio.h>

void fct1(int ptr1[], int ptr2[])
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

void fct2(int ptr3[][4], int ptr4[][4])
{
	printf("%d, %d\n", ptr3, ptr4);
	printf("%d, %d\n", ptr3 + 1, ptr4 + 1);
}

void fct3(int *ptr1[], int *ptr2[][5])
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

void fct4(int **ptr1[], int ***ptr2[][5])
{
	printf("%d, %d\n", ptr1, ptr2);
	printf("%d, %d\n", ptr1 + 1, ptr2 + 1);
}

int main(void)
{
	int arr1[3];
	int arr2[4];

	int arr3[3][4];
	int arr4[2][4];
	
	int* arr5[3];
	int* arr6[3][5];

	int** arr7[3];
	int*** arr8[3][5];

	fct1(arr1, arr2);
	fct2(arr3, arr4);

	fct3(arr5, arr6);
	fct4(arr7, arr8);

	return 0;
}
