#include <stdio.h>

int main(void)
{
	int state;
	char buf[30];

	FILE * file = fopen("Test.txt", "rt");
	if (file == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fputs("데이터 입력: ", stdout);
	fgets(buf, sizeof(buf), stdin);
	puts(buf);

	fgets(buf, sizeof(buf), file);
	puts(buf);

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error!\n");
		return 1;
	}
	return 0;
}
