#include <stdio.h>

int main(void)
{
	int a, b, ans;
	scanf("%d %d", &a, &b);
	ans = a - b;
	if (ans < 0)
		ans = -ans;
	printf("%d", ans);
	return 0;
}
