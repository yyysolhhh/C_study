# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#include "NameCard.h"

NameCard * MakeNameCard(char * name, char *phone)
{
	NameCard *newCard;

	newCard = (NameCard *)malloc(sizeof(NameCard));
	strlcpy(newCard->name, name, NAME_LEN);
	strlcpy(newCard->phone, phone, PHONE_LEN);
	return newCard;
}

void ShowNameCardInfo(NameCard * pcard)
{
	printf("name: %s | phone: %s\n", pcard->name, pcard->phone);
}

int NameCompare(NameCard * pcard, char * name)
{
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard * pcard, char * phone)
{
	strlcpy(pcard->phone, phone, PHONE_LEN);
}
