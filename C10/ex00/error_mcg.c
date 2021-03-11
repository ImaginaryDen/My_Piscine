/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mcg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:58:18 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 13:12:26 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	error_mcg(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
	write(2, "\n", 1);
}

int		check_error(int arc, char **argv)
{
	int file;

	if (arc == 1)
	{
		error_mcg("File name missing.");
		return (-1);
	}
	if (arc > 2)
	{
		error_mcg("Too many arguments.");
		return (-1);
	}
	if ((file = open(argv[1], O_RDONLY)) == -1)
	{
		error_mcg("Cannot read file.");
		return (-1);
	}
	return (file);
}
