#ifndef EMPLOYEE_H
# define EMPLOYEE_H

# define NAME_LEN	30

#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
	int num;
	char name[NAME_LEN];
} Employee;

#endif
