#include <stdlib.h>
#include "book.h"

int main(void)
{
	book *books;

	books = (book *)malloc(sizeof(book) * 3);
	if (!books)
		return 1;
	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++)
	{
		printf("저자: ");
		scanf("%s", books[i].author);
		printf("제목: ");
		scanf("%s", books[i].title);
		printf("페이지 수: ");
		scanf("%d", &books[i].page);

	}
	print_books(books);
	free(books);
	return 0;
}
