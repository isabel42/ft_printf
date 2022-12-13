SRCS	= ft_printf.c \
		  parse.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putnbr.c \
		  ft_putptr_hexamin.c \
		  ft_putnbr_hexamin.c \
		  ft_putnbr_hexacap.c \
		  ft_putnbr_unsigned.c \
		  ft_putpercent.c
		  					  
OBJS 	= ${SRCS:.c=.o}

NAME 	= libftprintf.a

CC		= gcc

RM		= rm -f

AR		= ar rc

CFLAGS	= -Wextra -Wall -Werror

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				make bonus -C ./libft
				cp ./libft/libft.a ${NAME}
				${AR} ${NAME} ${OBJS}
				ranlib ${NAME}

all:		${NAME}

clean:
			make fclean -C ./libft	
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

test:		all
			${CC} ${CFLAGS} print_test.c -L. -lftprintf
			./a.out
			rm a.out

.PHONY:		all clean fclean re

