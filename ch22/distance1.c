#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	double distance;

	fputs("첫 번째 점의 x, y 좌표 입력: ", stdout);
	scanf("%d %d", &p1.x, &p1.y);

	fputs("두 번째 점의 x, y 좌표 입력: ", stdout);
	scanf("%d %d", &p2.x, &p2.y);

	distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	printf("두 점의 거리는 %f입니다.\n", distance);
	return 0;
}
