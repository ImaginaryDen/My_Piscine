# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 17:15:13 by tjamis            #+#    #+#              #
#    Updated: 2021/03/02 22:34:22 by tjamis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail
NAME_LB = libft.a
SRCS	= ./error_mcg.c ./ft_atoi.c
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
