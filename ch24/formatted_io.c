#include <stdio.h>

int main(void)
{
	int state;
	int i, j;
	int a = 0, b = 0, c = 0;
	char c1 = 0, c2 = 0;

	FILE * file = fopen("Test.txt", "wt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	for (i = 2; i < 10; i++)
		for (j = 1; j < 10; j++)
			fprintf(file, "%d * %d = %d\n", i, j , i * j);

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	file = fopen("Test.txt", "rt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	for (i = 2; i < 10; i++)
		for (j = 1; j < 10; j++)
		{
			fscanf(file, "%d %c %d %c %d", &a, &c1, &b, &c2, &c);
			printf("%d %c %d %c %d \n", a, c1, b, c2, c);
		}

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
	return 0;
}
