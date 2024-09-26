#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void copy_arr(int *arr, int *dest, int size)
{
	for (int i = 0; i < size; i++)
		dest[i] = arr[i];
}

int extend_arr(int **arr, int size)
{
	int *temp;

	temp = (int *)malloc(sizeof(int) * (size + 3));
	if (!temp)
		return -1;
	copy_arr(*arr, temp, size);
	free(*arr);
	*arr = temp;
	size += 3;
	return size;
}

void print_arr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

void	check_leak(void)
{
	//system("leaks a.out");

    char cmd[256];
	pid_t pid = getpid();  // 현재 프로세스 ID 가져오기
    snprintf(cmd, sizeof(cmd), "leaks %d", pid);  // leaks 명령어 생성
    system(cmd);  // 현재 실행 중인 프로세스에서 메모리 누수 검사
}

int main(void)
{
	int n, i, size;
	int *arr;

	atexit(check_leak);
	size = 5;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
        fprintf(stderr, "Memory allocation failed!\n");
		exit(1);
	}
	i = 0;
	while (1)
	{
		printf("number?: ");
		scanf("%d", &n);
		if (n == -1)
			break;
		arr[i] = n;
		i++;
		if (i >= size)
		{
			size = extend_arr(&arr, size);
			if (size == -1)
			{
				free(arr);
				fprintf(stderr, "Memory allocation failed!\n");
				exit(1);
			}
		}
	}
	print_arr(arr, i);
	free(arr);
	return 0;
}
