#ifndef BOOK
# define BOOK

# include <stdio.h>
# define SIZE 3

typedef struct book
{
	char title[30];
	char author[30];
	int page;
} book;

void print_books(book *books);

#endif
