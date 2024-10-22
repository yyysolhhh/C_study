#include <unistd.h>
#include "employee.h"
#include "employee_utils.h"

void check_leak(void)
{
    char cmd[256];
	pid_t pid = getpid();
    snprintf(cmd, sizeof(cmd), "leaks %d", pid);
    system(cmd);
}

int main(void)
{
	List list;
	Employee *employee;

	//atexit(check_leak);
	ListInit(&list);
	if (!enroll(&list))
	{
		free_all(&list);
		return 1;
	}
	employee = find_employee(&list, "dfd", 7);
	if (!employee)
	{
		free_all(&list);
		return 1;
	}
	print_info(employee);
	free_all(&list);

	return 0;
}
