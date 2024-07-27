#include <stdio.h>

int main(void)
{
	printf("/%12d/ /%12d/ /%12d/ \n", 100, -200, 300);
	printf("/%+12d/ /%+12d/ /%+12d/ \n", 100, -200, 300);
	printf("/%-12d/ /%-12d/ /%-12d/ \n", 1000, -2000, 3000);

	return 0;
}
