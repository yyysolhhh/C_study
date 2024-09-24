#include <string.h>
#include "phonebook.h"

//static void clear_buffer()
//{
//	while(getchar() != '\n');
//}

static void remove_linefeed(char *str)
{
	str[strcspn(str, "\n")] = '\0';
}

int insert(t_data *phonebook, int *count)
{
	t_data data;

	if (*count > MAX)
		return 0;
	printf("\n[INSERT]\n");
	printf("Input name: ");
	//clear_buffer();
	fflush(stdin);
	fgets(data.name, LEN, stdin);
	remove_linefeed(data.name);
	printf("Input phone number: ");
	fgets(data.phone, LEN, stdin);
	remove_linefeed(data.phone);
	phonebook[*count] = data;
	(*count)++;
	return 1;
}

void delete(int *count)
{
	printf("\n[DELETE]\n");
	if (*count > 0)
		(*count)--;
}

int search(t_data *phonebook, int *count)
{
	char keyword[LEN];
	int cnt = 0;

	printf("\n[SEARCH]\n");
	printf("Input keyword: ");
	scanf("%s", keyword);
	for (int i = 0; i < *count; i++)
	{
		if (!strcmp(phonebook[i].name, keyword) || !strcmp(phonebook[i].phone, keyword))
		{
			printf("Name: %s | Phone: %s\n", phonebook[i].name, phonebook[i].phone);
			cnt++;
		}
	}
	return cnt;
}

void print_all(t_data *phonebook, int *count)
{
	printf("\n[PRINT ALL DATA]\n");
	for (int i = 0; i < *count; i++)
	{
		printf("Name: %s | Phone: %s\n", phonebook[i].name, phonebook[i].phone);
	}
	printf("Count: %d\n", *count);
}
