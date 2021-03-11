/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:13:00 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/23 20:48:05 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_nul(int nbr, int *norm, char *base)
{
	if (!nbr && !*norm)
	{
		write(1, &base[0], 1);
		*norm = 1;
	}
}

int		check(int nbr, char *base)
{
	int i;
	int j;
	int norm;

	i = 0;
	norm = 0;
	if (!base[0] || !base[1])
		norm = 1;
	while (base[i] && !norm)
	{
		if (base[i] == '+' || base[i] == '-')
			norm = 1;
		j = i - 1;
		while (j > 0 && !norm)
		{
			if (base[i] == base[j])
				norm = 1;
			j--;
		}
		i++;
	}
	check_nul(nbr, &norm, base);
	return (norm);
}

int		abs(int i)
{
	if (i < 0)
		i = -i;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	str[35];
	int		i;
	int		b;

	i = 0;
	b = 0;
	if (check(nbr, base))
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	while (base[b])
		b++;
	while (nbr)
	{
		str[i] = base[abs(nbr % b)];
		nbr /= b;
		i++;
	}
	while (i-- > 0)
		write(1, &str[i], 1);
}
