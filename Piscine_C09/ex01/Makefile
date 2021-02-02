SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADER	= includes/ft.h

OBJS	= ${SRCS: .c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f
AR	= ar rc
RAN	= ranlib

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RAN} ${NAME}

-c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=>o} -I${HEADER}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		.c.o all clean fclean re
