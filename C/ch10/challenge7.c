#include <stdio.h>

int main(void)
{
	int n, k;

	printf("1 이상 상수 n 입력: ");
	scanf("%d", &n);
	k = 0;
	for (int i = 31; i > 0; i--)
	{
		if (((n >> i) & 1) == 1)
		{
			k = i;
			break;
		}
	}
	printf("공식을 만족하는 k: %d\n", k);
	return 0;
}
