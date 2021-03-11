# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 17:15:13 by tjamis            #+#    #+#              #
#    Updated: 2021/03/03 13:02:16 by tjamis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ./do-op
NAME_LB = libft.a
SRCS	= ./ft_atoi.c ./ft_putnbr.c ./ft_putstr.c ./ft_check_null.c ./ft_operators.c
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror 
HEADER	= -I ./ft_header.h
.PHONE: .c.o all clean fclean re

.c.o:
		gcc ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

all: 	${OBJS}
		ar rc ${NAME_LB} ${OBJS}
		gcc ${CFLAGS} main.c -L. -lft -o ${NAME}
clean:
		rm -rf ${OBJS} ${NAME_LB}
fclean: clean 
		rm -rf ${NAME}
