#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int throw_dice()
{
	return rand() % 6 + 1;
}

int main(void)
{
	int dice1, dice2;

	srand((int)time(NULL));
	dice1 = throw_dice();
	dice2 = throw_dice();
	printf("주사위 결과: %d, %d\n", dice1, dice2);
	return 0;
}
