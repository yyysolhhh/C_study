#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	FILE *file1, *file2;
	char str1[100], str2[100];
	int diff, close1, close2;

	if (ac < 3)
		return 1;
	file1 = fopen(av[1], "rt");
	if (!file1)
	{
		printf("fopen error\n");
		return 1;
	}
	file2 = fopen(av[2], "rt");
	if (!file2)
	{
		printf("fopen error\n");
		fclose(file1);
		return 1;
	}
	while (1)
	{
		fgets(str1, sizeof(str1), file1);
		fgets(str2, sizeof(str2), file2);
		if (feof(file1) || feof(file2))
			break;
		diff = strcmp(str1, str2);
		if (diff)
			break;
	}
	close1 = fclose(file1);
	close2 = fclose(file2);
	if (close1 || close2)
	{
		printf("fclose error\n");
		return 1;
	}
	if (diff)
		printf("두 개의 파일은 다릅니다.\n");
	else
		printf("두 개의 파일은 일치합니다.\n");
	return 0;
}
