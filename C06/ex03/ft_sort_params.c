/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:50:29 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 23:19:36 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_puts(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int		my_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int		main(int argc, char **argv)
{
	char	**min;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		min = &argv[i];
		j = i + 1;
		while (j < argc)
		{
			if (my_strcmp(*min, argv[j]) > 0)
				min = &argv[j];
			j++;
		}
		swap(min, &argv[i]);
		i++;
	}
	i = 1;
	while (i < argc)
		my_puts(argv[i++]);
	return (0);
}
