#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int len;

	//scanf("%s", str);
	fgets(str, 100, stdin);
	len = 0;
	while (str[len] != 0)
		len++;
	printf("%d %zu", len, strlen(str));
	return 0;
}
