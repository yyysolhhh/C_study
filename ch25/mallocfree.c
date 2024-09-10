#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* a;
	a = (int*)malloc(sizeof(int));
	if (a == NULL)
	{
		puts("메모리 할당에 실패!");
		exit(1);
	}

	*a = 20;
	printf("힙에 저장된 변수 a: %d\n", *a);

	free(a);
	return 0;
}
