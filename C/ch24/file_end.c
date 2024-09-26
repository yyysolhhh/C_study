#include <stdio.h>

int main(void)
{
	int state;
	char* pState;
	char str[20];

	FILE * file = fopen("Test.txt", "rt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	while (1)
	{
		pState = fgets(str, sizeof(str), file);
		if (pState == NULL)
			break;
		fputs(str, stdout);
	}

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}

	return 0;
}
