#include "phonebook.h"

int load_data(t_data *phonebook, int *count)
{
	FILE *file;

	file = fopen(FILENAME, "rt");
	if (!file)
		return 0;
	*count = 0;
	while (1)
	{
		fscanf(file, "%s %s", phonebook[*count].name, phonebook[*count].phone);
		if (feof(file))
			break;
		(*count)++;
	}
	if (fclose(file))
		return 0;
	return 1;
}

int save_to_file(t_data *phonebook, int count)
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
