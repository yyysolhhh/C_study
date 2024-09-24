#include <string.h>
#include "phonebook.h"

int load_data(t_data *phonebook, int *count)
{
	FILE *file;
	char name[LEN], phone[LEN];

	*count = 0;
	file = fopen(FILENAME, "rt");
	if (!file)
		return 0;
	while (!feof(file))
	{
		if (fscanf(file, "%s %s", name, phone) != 2)
			break;
		if (strlen(name) == 0 || strlen(phone) == 0)
			continue;
		strlcpy(phonebook[*count].name, name, LEN);
		strlcpy(phonebook[*count].phone, phone, LEN);
		(*count)++;
	}
	if (fclose(file))
		return 0;
	return 1;
}

int save_data(t_data *phonebook, int count)
{
	FILE *file;
	
	file = fopen(FILENAME, "wt");
	if (!file)
		return 0;
	for (int i = 0; i < count; i++)
	{
		//fprintf(file, "Name: %s | Phone: %s\n", phonebook[i].name, phonebook[i].phone);
		fprintf(file, "%s %s\n", phonebook[i].name, phonebook[i].phone);
	}
	if (fclose(file))
		return 0;
	return 1;
}
