#include <string.h>
#include "employee.h"
#include "employee_utils.h"

void print_info(Employee *employee)
{
	printf("%d | %s\n", employee->num, employee->name);
}

int enroll(List *list)
{
	Employee *employee;
	int num;
	char name[NAME_LEN];

	for (int i = 0; i < 4; i++)
	{
		employee = (Employee *)malloc(sizeof(Employee));
		if (!employee)
			return (0);
		printf("번호 입력");
		scanf("%d", &num);
		printf("이름 입력");
		scanf("%s", name);
		employee->num = num;
		strlcpy(employee->name, name, NAME_LEN);
		LInsert(list, employee);
	}
	return (1);
}

Employee *find_employee(List *list, char *name, int days)
{
	Employee *employee;
	int i;

	if (!LFirst(list, &employee))
	{
		printf("비었음\n");
		return (NULL);
	}
	i = 0;
	while (strcmp(employee->name, name))
	{
		if (i >= LCount(list) || !LNext(list, &employee))
		{
			printf("찾는 사람 없음\n");
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < days; i++)
		LNext(list, &employee);
	return employee;
}

void free_all(List *list)
{
	Employee *employee;

    if (!LFirst(list, &employee))
		return ;
	while (1) {
		free(employee);
		employee = LRemove(list);
		if (!LNext(list, &employee))
			return ;
    }
}
