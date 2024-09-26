#include <stdio.h>

int main(void)
{
	int arr[3][2] = {1, 2, 3, 4, 5, 6};

	printf("arr: %lu \n", sizeof(arr));
	printf("arr[0]: %lu \n", sizeof(arr[0]));
	printf("arr[1]: %lu \n", sizeof(arr[1]));
	printf("arr[2]: %lu \n", sizeof(arr[2]));

	return 0;
}
