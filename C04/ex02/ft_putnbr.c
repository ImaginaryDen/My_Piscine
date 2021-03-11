/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:27:02 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/23 16:50:34 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_min(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
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
}
