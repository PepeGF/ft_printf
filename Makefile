SRCS    =	ft_printf.c ft_nbrlen.c ft_putchar_fd.c ft_putnbr.c \
			ft_putnbr_base.c ft_putstr_fd.c ft_strlen.c

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
