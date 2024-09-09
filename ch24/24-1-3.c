#include <stdio.h>

int main(void)
{
	char buf[30];
	FILE *file;

	if (!(file = fopen("mystory.txt", "rt")))
	{
		printf("file open error\n");
		return 1;
	}

	while (1)
	{
		fgets(buf, sizeof(buf), file);
		if (feof(file))
			break;
		fputs(buf, stdout);
	}

	if (fclose(file))
	{
		printf("file close error\n");
		return 1;
	}

	return 0;
}
