NAME	= libftprintf.a

SOURCES	=	ft_strlen.c ft_putchar.c ft_putstr.c ft_putnbr.c \
			ft_putnbr_un.c ft_puthexa_l.c ft_puthexa_u.c ft_putptr.c \
			ft_printf.c

OBJECTS	= $(SOURCES:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -I./

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

all:	$(NAME)

clean:
		rm -f $(OBJECTS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
