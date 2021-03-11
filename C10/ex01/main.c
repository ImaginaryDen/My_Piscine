/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:59 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 21:04:24 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	std_input(void)
{
	char c;

	while (read(0, &c, 1) != 0)
		write(1, &c, 1);
}

void	cat_print_file(char **argv, int i)
{
	char	ch;
	int		file;
	int		f;

	if ((file = open(argv[i], O_RDONLY)) == -1)
	{
		print_error(argv[0], argv[i]);
		return ;
	}
	while ((f = read(file, &ch, 1)) != 0)
	{
		if (f == -1)
		{
			print_error(argv[0], argv[i]);
			return ;
		}
		write(1, &ch, 1);
	}
	if (close(file) == -1)
		print_error(argv[0], argv[i]);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			std_input();
		else
			cat_print_file(argv, i);
		i++;
	}
	if (argc == 1)
		std_input();
}
