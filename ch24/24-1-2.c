#include <stdio.h>

int main(void)
{
	FILE *file = fopen("mystory.txt", "at");
	if (!file)
	{
		printf("file open error\n");
		return 1;
	}

	fputs("취미\n", file);
	fputs("음식\n", file);

	if (fclose(file))
	{
		printf("file close error\n");
		return 1;
	}

	return 0;
}
