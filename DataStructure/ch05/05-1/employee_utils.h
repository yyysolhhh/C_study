#ifndef EMPLOYEE_URILS_H
# define EMPLOYEE_URILS_H

# include "CLinkedList.h"

void print_info(Employee *employee);
int enroll(List *list);
Employee *find_employee(List *list, char *name, int days);
void free_all(List *list);

#endif
