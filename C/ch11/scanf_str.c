#include <stdio.h>

int main(void)
{
	char str[100];

	printf("문자열 입력: ");
	//scanf("%s", str);
	scanf("%[^%\n]s", str);
	//fgets(str, 100, stdin);
	printf("입력된 문자열: %s \n", str);
	printf("%c\n", *str);
	printf("%p\n", str);
	return 0;
}
