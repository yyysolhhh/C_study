# include <stdio.h>
# include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

List initList()
{
	List cardList;
	char name[NAME_LEN];
	char phone[PHONE_LEN];

	ListInit(&cardList);
	for (int i = 0; i < 3; i++)
	{
		printf("%d번 이름 입력: ", i + 1);
		scanf("%s", name);
		printf("번호 입력: ");
		scanf("%s", phone);
		LInsert(&cardList, MakeNameCard(name, phone));
	}
	return cardList;
}

void printAllData(List *cardList)
{
	NameCard *data;

	LFirst(cardList, &data);
	while (1)
	{
		ShowNameCardInfo(data);
		if (!LNext(cardList, &data))
			return ;
	}
}

void search(List *cardList)
{
	NameCard *data;
	char name[NAME_LEN];

	printf("찾을 이름 입력: ");
	scanf("%s", name);
	LFirst(cardList, &data);
	while (1)
	{
		if (!NameCompare(data, name))
		{
			ShowNameCardInfo(data);
			return ;
		}
		if (!LNext(cardList, &data))
		{
			printf("찾는 사람 없음\n");
			return ;
		}
	}
}

void update(List *cardList)
{
	NameCard *data;
	char name[NAME_LEN];
	char phone[PHONE_LEN];

	printf("찾을 이름 입력: ");
	scanf("%s", name);
	printf("새 번호 입력: ");
	scanf("%s", phone);
	LFirst(cardList, &data);
	while (1)
	{
		if (!NameCompare(data, name))
		{
			ChangePhoneNum(data, phone);
			printf("수정 완료\n");
			return ;
		}
		if (!LNext(cardList, &data))
		{
			printf("찾는 사람 없음\n");
			return ;
		}
	}
}

void delete(List *cardList)
{
	NameCard *data;
	char name[NAME_LEN];

	printf("찾을 이름 입력: ");
	scanf("%s", name);
	LFirst(cardList, &data);
	while (1)
	{
		if (!NameCompare(data, name))
		{
			free(LRemove(cardList));
			printf("삭제 완료\n");
			return ;
		}
		if (!LNext(cardList, &data))
		{
			printf("찾는 사람 없음\n");
			return ;
		}
	}
}

void freeAll(List *cardList)
{
	NameCard *data;

	LFirst(cardList, &data);
	while (1)
	{
		free(data);
		if (!LNext(cardList, &data))
			return ;
	}
}

int main(void)
{
	List cardList;

	cardList = initList();
	printAllData(&cardList);
	search(&cardList);
	update(&cardList);
	delete(&cardList);
	printAllData(&cardList);
	freeAll(&cardList);
	return 0;
}
