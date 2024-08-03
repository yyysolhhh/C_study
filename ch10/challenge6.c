#include <stdio.h>

int main(void)
{
	int sec;
	int h, m, s;

	printf("초(second) 입력: ");
	scanf("%d", &sec);
	h = sec / 3600;
	//m = (sec / 60) % 60; // 초를 분으로 변환하고 60으로 나눈 나머지
	m = (sec % 3600) / 60; // 시 제외하고 나머지 초에서 분 계산
	s = sec % 60;
	printf("h: %d, m: %d, s: %d", h, m, s);
	return 0;
}
