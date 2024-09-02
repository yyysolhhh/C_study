#include <stdio.h>

#define NUM 3
#define NAME 0
#define PHONE 1
#define ADDR 2

int main(void)
{
	char pArray[NUM][3][50];
	int i;

	for (i = 0; i < NUM; i++)
	{
		printf("이름, 전화번호, 주소 순으로 입력: ");
		scanf("%s %s %s", pArray[i][NAME], pArray[i][PHONE], pArray[i][ADDR]);
	}

	printf("\n입력 결과는 다음과 같습니다.\n");
	for (i = 0; i < NUM; i++)
	{
		printf("%d번째 사람\n", i + 1);
		printf("이름: %s, ", pArray[i][NAME]);
		printf("전화번호: %s, ", pArray[i][PHONE]);
		printf("주소: %s \n\n", pArray[i][ADDR]);
	}
	return 0;
}
