#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int len;
	char *str;

	printf("입력하고자 하는 문자열의 최대 길이: ");
	scanf("%d", &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		exit(1);
	fflush(stdin);
	printf("문자열 입력: ");
	fgets(str, len, stdin);
	printf("입력된 문자열 출력: %s", str);
	free(str);
	return 0;
}
