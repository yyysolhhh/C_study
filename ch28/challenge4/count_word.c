#include <stdio.h>

int main(int ac, char **av)
{
	FILE *file;
	char word[10];
	int a, b;

	if (ac < 2)
		return 1;
	file = fopen(av[1], "rt");
	if (!file)
	{
		printf("fopen error\n");
		return 1;
	}
	a = 0, b = 0;
	while (fscanf(file, "%s", word) != EOF)
	{
		if (word[0] == 'A' || word[0] == 'a')
			a++;
		else if (word[0] == 'B' || word[0] == 'b')
			b++;
	}
	if (fclose(file))
	{
		printf("fclose error\n");
		return 1;
	}
	printf("A(a) 시작 단어 수: %d\n", a);
	printf("B(b) 시작 단어 수: %d\n", b);
	return 0;
}
