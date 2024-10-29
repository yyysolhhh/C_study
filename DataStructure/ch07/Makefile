NAME	 = a.out
SRCS	 = $(wildcard $(d)*.c)
INCL	 = $(wildcard $(d)*.h)
OBJDIR   = $(d)obj
OBJS	 = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

CC		 = gcc
CFLAGS	 = -Wall -Wextra -Werror
RM		 = rm -rf

.PHONY: all
all:		$(NAME)

$(OBJDIR)/%.o:	$(d)%.c
			mkdir -p $(OBJDIR)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(d)$(NAME) $(OBJS)

.PHONY: clean
clean:
			if [ -n "$(d)" ]; then $(RM) $(OBJDIR); fi

.PHONY: fclean
fclean:		clean
			if [ -n "$(d)" ]; then $(RM) $(d)$(NAME); fi

.PHONY:	re
re:			fclean all

.PHONY: exe
exe:
			@$(d)$(NAME)
