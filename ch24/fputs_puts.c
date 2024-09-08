#include <stdio.h>

int main(void)
{
	int state;

	FILE * file = fopen("Test.txt", "wt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	puts("Don't Worry!");
	fputs("Don't Worry!\n", stdout);
	fputs("Don't Worry!\n", file);

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	return 0;
}
