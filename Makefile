SRCS    =

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra  

RM = rm -f

all:	$(NAME)	
	
$(NAME): $(OBJS)
	ar rcs $(NAME) $?

clean:	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS_OBJS)

re:	fclean $(NAME)
	
.PHONY: all bonus clean fclean re 
