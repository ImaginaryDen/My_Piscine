/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:46:25 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/24 22:48:39 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	puts(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	while (--argc)
		puts(argv[argc]);
	return (0);
}
