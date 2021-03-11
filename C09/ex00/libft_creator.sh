# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 04:19:08 by tjamis            #+#    #+#              #
#    Updated: 2021/02/28 20:21:21 by tjamis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libstr.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.c ft_strcmp.o
rm *o