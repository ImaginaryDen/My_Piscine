/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:51:51 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 22:53:09 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_name(char *name)
{
	print_str("==> ");
	print_str(name);
	print_str(" <==\n");
}

void	*ft_realoc(void *old, int size)
{
	char *new;

	new = malloc(size);
	while (size)
	{
		new[size] = ((char*)old)[size];
		size--;
	}
	new[0] = ((char*)old)[0];
	free(old);
	return (new);
}

void	tail_print_file(char **argv, int pos, int byte, int pr_name)
{
	char	*str;
	int		i;
	int		j;
	int		file;

	if ((file = open(argv[pos], O_RDWR)) == -1)
	{
		print_error(argv[0], argv[pos]);
		return ;
	}
	if (pr_name)
		print_name(argv[pos]);
	i = 0;
	str = (char*)malloc(2);
	while (read(file, &str[i], 1))
	{
		i++;
		str = ft_realoc(str, i);
	}
	j = i - byte;
	while (j < i)
		write(1, &str[j++], 1);
	return ;
}

void	std_input(int byte)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	str = (char*)malloc(2);
	while (read(1, &str[i], 1))
	{
		i++;
		str = ft_realoc(str, i);
	}
	j = i - byte;
	while (j < i)
	{
		write(1, &str[j], 1);
		j++;
	}
	return ;
}

int		main(int argc, char **argv)
{
	int	i;
	int byte;

	if (argv[1][0] != '-' && argv[1][1] != 'c' && argv[1][2] != '\0')
		return (0);
	i = 3;
	byte = ft_atoi(argv[2]);
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			std_input(byte);
		else
			tail_print_file(argv, i, byte, argc > 4);
		i++;
	}
	if (argc == 3)
		std_input(byte);
}
