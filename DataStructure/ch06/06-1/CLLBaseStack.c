#include <stdlib.h>
#include "CLLBaseStack.h"

void StackInit(Stack *pstack)
{
	pstack->list = (List *)malloc(sizeof(List));
	ListInit(pstack->list);
}

int SIsEmpty(Stack *pstack)
{
	return (LCount(pstack->list) == 0);
}

void SPush(Stack *pstack, Data data)
{
	LInsertFront(pstack->list, data);
}

Data SPop(Stack *pstack)
{
	Data data;

	LFirst(pstack->list, &data);
	LRemove(pstack->list);
	return data;
}

Data SPeek(Stack *pstack)
{
	Data data;

	LFirst(pstack->list, &data);
	return data;
}
