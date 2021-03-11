/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:22:32 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/23 22:43:23 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int		check(char *base)
{
	int i;
	int j;
	int norm;

	i = 1;
	norm = 0;
	if (!base[0] || !base[1])
		norm = 1;
	while (base[i] && !norm)
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			norm = 1;
		j = i - 1;
		while (j && !norm)
		{
			if (base[i] == base[j])
				norm = 1;
			j--;
		}
		i++;
	}
	return (norm);
}

int		find_num(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int		my_power(int nb, int power)
{
	if (!power)
		return (1);
	return (nb * my_power(nb, power - 1));
}

int		ft_atoi_base(char *str, char *base)
{
	int result;
	int len;
	int b;
	int i;
	int sign;

	result = 0;
	len = 0;
	b = 0;
	i = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || (*str == '-' && (sign = -sign)))
		str++;
	if (check(base))
		return (0);
	while (str[len] && !is_space(str[len]) && str[len] != '+' &&
		str[len] != '-' && (find_num(str[len], base) || base[0] == str[len]))
		len++;
	while (base[b])
		b++;
	while (i++ <= len)
		result += my_power(b, i - 1) * find_num(str[len - i], base);
	return (result * sign);
}
