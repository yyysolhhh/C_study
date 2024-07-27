#include <stdio.h>

int main(void)
{
	printf("아스키 코드를 구성하고 있는 값의 범위는 어떻게 되는가?\n");
	printf("0 ~ 127\n\n");
	
	printf("대문자 A에서부터 대문자 Z까지 뒤로 갈수록 값이 어떻게 되는가?\n");
	printf("1씩 증가\n\n");

	printf("알파벳 대문자와 소문자 중 어떤 것이 값이 더 큰가? 그리고 대 소문자간 값의 차이는 얼마나 나는가?\n");
	printf("소문자, %d\n", 97 - 65);

	return 0;
}
