#include <unistd.h>

int main(void)
{
	write(1, "홍\n홍길\n홍길동", 20);
	return 0;
}
