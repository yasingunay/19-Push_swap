# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 15:48:56 by ygunay            #+#    #+#              #
#    Updated: 2022/11/30 16:58:46 by ygunay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRCS = ft_printf.c \
			ft_print_hexa.c \
			ft_print_ptr.c \
			ft_print_unsigned.c \
			ft_printf_utils.c \
			
OBJS	= ${SRCS:.c=.o}


INCS	= .

LIB		= ar rcs
GCC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

%.o : %.c 
			${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}:	${OBJS}
			
				${LIB} ${NAME} ${OBJS} 

all:		${NAME}

norm:
			norminette
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o norm
