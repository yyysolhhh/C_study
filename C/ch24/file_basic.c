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

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
	return 0;
}
