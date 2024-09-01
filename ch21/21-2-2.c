#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 3

void swap(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int main(void)
{
	char *str[3];
	char dest[200];

	for (int i = 0; i < SIZE; i++)
	{
		str[i] = (char *)malloc(sizeof(char) * 50);
		fgets(str[i], sizeof(str[i]), stdin);
	}
	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (strcmp(str[i], str[j]) < 0)
			{
				swap(&str[i], &str[j]);
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		strncat(dest, str[i], strlen(str[i]) - 1);
		free(str[i]);
	}
	printf("%s", dest);
	return 0;
}
