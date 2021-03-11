/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:03:09 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 17:27:02 by tjamis           ###   ########.fr       */
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
	(void)argc;
	puts(*argv);
	return (0);
}
