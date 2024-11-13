#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char *str1, char *str2)
{
	return strlen(str2) - strlen(str1);
}

int main(void)
{
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);

	PEnqueue(&pq, "123");
	PEnqueue(&pq, "1");
	PEnqueue(&pq, "12345");
	PEnqueue(&pq, "123457");
	PEnqueue(&pq, "123");
	PEnqueue(&pq, "12345789");
	PEnqueue(&pq, "12");

	while (!PQIsEmpty(&pq))
		printf("%s\n", PDequeue(&pq));

	return 0;
}
