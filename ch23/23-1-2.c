#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point point_add(struct point p1, struct point p2)
{
	struct point p = {p1.x + p2.x, p1.y + p2.y};
	return p;
}

void show(struct point p)
{
	printf("x: %d, y: %d\n", p.x, p.y);
}

int main(void)
{
	struct point p1;
	struct point p2;

	printf("p1 x, y 입력\n");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p2 x, y 입력\n");
	scanf("%d %d", &p2.x, &p2.y);
	show(point_add(p1, p2));
	return 0;
}
