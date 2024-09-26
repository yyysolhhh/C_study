#include <stdio.h>

int main(void)
{
	int grade[5][5];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			scanf("%d", &grade[i][j]);
	}
	for (int i = 0; i < 4; i++)
	{
		grade[i][4] = 0;
		grade[4][i] = 0;
		for (int j = 0; j < 4; j++)
		{
			grade[i][4] += grade[i][j];
			grade[4][i] += grade[j][i];
		}
	}
	grade[4][4] = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%3d", grade[i][j]);
		printf("\n");
	}
	return 0;
}
