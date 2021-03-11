/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:37:12 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/27 16:02:31 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int		my_abs(int i)
{
	if (i < 0)
		i = -i;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

char	*ft_putnbr(int nbr)
{
	int		i;
	int		size;
	char	*result;

	size = 0;
	while (nbr / ft_recursive_power(10, size))
		size++;
	if (nbr <= 0)
		size++;
	result = (char *)malloc(size + 1);
	result[size] = '\0';
	result[0] = '0';
	if (nbr < 0)
		result[0] = '-';
	i = 1;
	while (nbr)
	{
		result[size - i] = my_abs(nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	return (result);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	if (!par)
		return ;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putstr(ft_putnbr(par[i].size));
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}
