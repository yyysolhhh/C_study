#include <stdio.h>

int main(void)
{
	int state;
	int ch;

	FILE * file = fopen("Test.txt", "wb");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fputc('1', file);
	fputc((char)255, file);
	fputc('2', file);

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	file = fopen("Test.txt", "rb");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(file);
		if (ch == -1)
			break;
		printf("data: %c\n", ch);
	}

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	return 0;
}
