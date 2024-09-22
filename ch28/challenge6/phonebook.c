#include <stdlib.h>
#include "phonebook.h"

void print_menu()
{
	printf("\n-----Menu-----\n");
	printf("1. Insert\n2. Delete\n3. Search\n4. Print All\n5. Exit\n");
	printf("Choose the item: ");
}

void run(int item, t_data *phonebook, int *count)
{
	int result;

	if (item == 1)
	{
		if (insert(phonebook, count))
			printf("-------> Data inserted\n");
		else
			printf("-------> Failed to insert data\n");

	}
	else if (item == 2)
	{
		delete(count);
		printf("-------> Data deleted\n");
	}
	else if (item == 3)
	{
		result = search(phonebook, count);
		printf("-------> %d Data searched\n", result);
	}
	else if (item == 4)
	{
		print_all(phonebook, count);
	}
	else
	{
		printf("Invalid number\n");
	}
}

int main(void)
{
	int item, count;
	t_data *phonebook;

	phonebook = (t_data *)malloc(sizeof(t_data) * MAX);
	if (!phonebook)
		return 1;
	count = 0;
	while (1)
	{
		print_menu();
		scanf("%d", &item);
		if (item == 5)
			break;
		run(item, phonebook, &count);
	}
	free(phonebook);
	return 0;
}
