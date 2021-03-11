/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:35:46 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 17:29:16 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
		puts(argv[i++]);
	return (0);
}
