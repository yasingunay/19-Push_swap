# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygunay <ygunay@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 15:42:42 by ygunay            #+#    #+#              #
#    Updated: 2023/01/16 14:59:24 by ygunay           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.c \
			  utils.c \
			  operations.c \
			  init_numbers.c \
			  sort.c \
			  radix.c \
			  operations_shorts.c \
			  check_list.c

NAME 		= push_swap

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror -Iinclude -Ilibft -Ift_printf

CC			= gcc

RM			= rm -f

MAKE		= make

$(NAME):	$(OBJS)
			$(MAKE) -C libft	
			$(MAKE) -C ft_printf
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft/libft.a ft_printf/ft_printf.a

all:		$(NAME)

clean:		
			${RM} ${OBJS}
			$(MAKE) clean -C libft	
			$(MAKE) clean -C ft_printf

fclean:		clean
				${RM} $(NAME)
				$(MAKE) fclean -C libft
				$(MAKE) fclean -C ft_printf

re:			fclean all

.PHONY:		all clean fclean re