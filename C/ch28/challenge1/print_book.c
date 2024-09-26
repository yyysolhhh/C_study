#include "book.h"

void print_books(book *books)
{
	printf("도서 정보 출력\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("book%d\n", i + 1);
		printf("저자: %s\n", books[i].author);
		printf("제목: %s\n", books[i].title);
		printf("페이지 수: %d\n", books[i].page);
	}
}

