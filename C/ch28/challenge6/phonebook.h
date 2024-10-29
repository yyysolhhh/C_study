#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <stdio.h>

# define MAX 10
# define LEN 30

typedef struct s_data
{
	char name[LEN];
	char phone[LEN];
} t_data;

int insert(t_data *phonebook, int *count);
void delete(int *count);
int search(t_data *phonebook, int *count);
void print_all(t_data *phonebook, int *count);

#endif