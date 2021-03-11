# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 19:32:34 by tjamis            #+#    #+#              #
#    Updated: 2021/02/28 19:54:43 by tjamis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror 
HEADER	= -I ./includes/ft.h

.c.o:
		gcc ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

all: 	${OBJS} 
		ar rc ${NAME} ${OBJS}
clean:
		rm -rf ${OBJS}
fclean: clean 
		rm -rf ${NAME}
re:		fclean all

${NAME}: all
