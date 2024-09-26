NAME	 = phonebook.out
SRCS	 = $(wildcard *.c)
INCL	 = $(wildcard *.h)
OBJDIR   = obj
OBJS	 = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
TEXT 	 = phonebook.txt

CC		 = gcc
CFLAGS	 = -Wall -Wextra -Werror
RM		 = rm -rf

.PHONY: all
all:		$(NAME)

$(OBJDIR)/%.o:	%.c
			mkdir -p $(OBJDIR)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.PHONY: clean
clean:
			$(RM) $(OBJDIR)

.PHONY: fclean
fclean:		clean
			$(RM) $(NAME)

.PHONY:	re
re:			fclean all

.PHONY: delete
delete:
			$(RM) $(TEXT)
