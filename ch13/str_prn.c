#include <stdio.h>

int main(void)
{
	char str1[5] = "abcd";
	char *str2 = "ABCD";

	printf("%s \n", str1);
	printf("%s \n", str2);

	str1[0] = 'x';
	//str2[0] = 'x';

	printf("%s \n", str1);
	printf("%s \n", str2);

	return 0;
}
