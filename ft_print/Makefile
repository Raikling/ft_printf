RCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putptr.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
LIBC = ar rcs
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC}${NAME}${OBJS}
%.o: %.c
	${CC}${FLAGS} -c -$< -o $@

clean:
	${RM}${OBJS}

fclean: clean
	${RM}${NAME}

re: clean all

.PHONY: all clean fclean re
