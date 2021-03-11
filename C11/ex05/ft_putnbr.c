/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:50:03 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 18:06:04 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		check_min(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0\n", 2);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char	str[15];
	int		i;
	int		b;

	i = 0;
	b = 0;
	if (check_min(nb))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}
