#include <stdio.h>

struct employee {
	char name[50];
	char id[50];
	long long salary;
} emp1, emp2;

int main(void)
{
	printf("1 이름, 주민등록번호, 연봉 입력\n");
	scanf("%s %s %lld", emp1.name, emp1.id, &emp1.salary);
	printf("2 이름, 주민등록번호, 연봉 입력\n");
	scanf("%s %s %lld", emp2.name, emp2.id, &emp2.salary);
	printf("1\n이름: %s\n주민등록번호: %s\n연봉: %lld\n", emp1.name, emp1.id, emp1.salary);
	printf("2\n이름: %s\n주민등록번호: %s\n연봉: %lld\n", emp2.name, emp2.id, emp2.salary);
	return 0;
}
