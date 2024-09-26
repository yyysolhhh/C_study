#include <stdio.h>

int main(void)
{
	FILE *file = fopen("mystory.txt", "wt");
	if (!file)
	{
		printf("file open error\n");
		return 1;
	}

	fputs("이름\n", file);
	fputs("주소\n", file);
	fputs("번호\n", file);

	if (fclose(file))
	{
		printf("file close error\n");
		return 1;
	}

	return 0;
}
