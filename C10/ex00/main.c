/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:37:01 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 13:17:43 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_file(int file)
{
	char ch;

	while (read(file, &ch, 1) != 0)
		write(1, &ch, 1);
}

int		main(int arc, char **argv)
{
	int file;

	if ((file = check_error(arc, argv)) == -1)
		return (1);
	print_file(file);
	close(file);
	return (0);
}
