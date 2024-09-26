#include <stdio.h>

int main(void)
{
	int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{6, 5}, {7, 8}}};

	printf("arr[1][0][1]: %d \n", arr[1][0][1]);

	printf("1. arr[1][0][1]: %d \n", *(arr[1][0] + 1)); // 6

	printf("2. arr[1][0][1]: %d \n", (*(arr[1]) + 0)[1]); // 4
	printf("2. arr[1][0][1]: %d \n", (*(arr[1]))[1]);
	//printf("2. arr[1][0][1]: %d \n", *(arr[1])[1]);

	printf("3. arr[1][0][1]: %d \n", *(*(arr[1] + 0) + 1)); // 5
	printf("3. arr[1][0][1]: %d \n", *(*arr[1] + 1));
	//printf("3. arr[1][0][1]: %d \n", (*(*arr[1])) + 1);
	//printf("3. arr[1][0][1]: %d \n", *(*arr[1] + 0)+ 1);
	//printf("3. arr[1][0][1]: %d \n", *(*arr[1])+ 1);
	//printf("3. arr[1][0][1]: %d \n", *(*(arr[1]) + 0) + 1);

	printf("4. arr[1][0][1]: %d \n", (*(arr + 1))[0][1]); // 1
	//printf("4. arr[1][0][1]: %d \n", *(arr + 1)[0][1]);

	printf("5. arr[1][0][1]: %d \n", *(*(arr + 1)[0] + 1));

	printf("6. arr[1][0][1]: %d \n", (**(arr + 1))[1]);
	printf("6. arr[1][0][1]: %d \n", (*(*(arr + 1) + 0))[1]); // 2
	//printf("6. arr[1][0][1]: %d \n", *(*(arr + 1) + 0)[1]);

	printf("7. arr[1][0][1]: %d \n", *(*(*(arr + 1) + 0) + 1)); // 3
	printf("7. arr[1][0][1]: %d \n", *(**(arr + 1) + 1));

	return 0;
}
