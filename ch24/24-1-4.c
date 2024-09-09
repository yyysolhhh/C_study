#include <stdio.h>

int main(int ac, char **av)
{
	char buf[30];
	FILE *file1, *file2;
	int state1, state2;

	if (ac < 3)
	{
		printf("input error\n");
		return 1;
	}

	file1 = fopen(av[1], "rt");
	if (!file1)
	{
		printf("file1 open error\n");
		return 1;
	}
	file2 = fopen(av[2], "wt");
	if (!file2)
	{
		printf("file2 open error\n");
		fclose(file1);
		return 1;
	}

	while (fgets(buf, sizeof(buf), file1))
		fputs(buf, file2);

	state1 = fclose(file1);
	state2 = fclose(file2);
	if (state1 || state2)
	{
		printf("file close error\n");
		return 1;
	}

	return 0;
}
