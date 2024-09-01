#include <stdio.h>

struct employee {
	char name[50];
	char id[50];
	long long salary;
};

int main(void)
{
	struct employee emp;

	scanf("%s %s %lld", emp.name, emp.id, &emp.salary);
	printf("이름: %s\n주민등록번호: %s\n연봉: %lld\n", emp.name, emp.id, emp.salary);
	return 0;
}
