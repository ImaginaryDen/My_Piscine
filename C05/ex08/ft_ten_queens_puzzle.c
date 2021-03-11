/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:19:43 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/24 19:21:12 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char *m, int j, int i)
{
	int result;
	int ch;

	ch = 1;
	result = 1;
	while (j >= 0)
	{
		if (m[j] == i + '0' || m[j] == i + ch + '0' || m[j] == i - ch + '0')
		{
			result = 0;
			break ;
		}
		ch++;
		j--;
	}
	return (result);
}

int		req(char *result, int pos)
{
	int i;
	int sum;

	i = -1;
	sum = 0;
	if (pos == 10)
	{
		write(1, result, 11);
		return (1);
	}
	while (++i != 10)
	{
		if (!check(result, pos - 1, i))
			continue;
		result[pos] = i + '0';
		sum += req(result, pos + 1);
	}
	return (sum);
}

int		ft_ten_queens_puzzle(void)
{
	char	result[11];
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	result[10] = '\n';
	while (i <= 9)
	{
		result[0] = i + '0';
		sum += req(result, 1);
		i++;
	}
	return (sum);
}
