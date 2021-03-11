/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:33:06 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/26 21:47:52 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check(char *base);
int		is_space(char c);
int		find_num(char c, char *base);
int		my_power(int nb, int power);
int		abs(int i);

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
	while (find_num(str[len], base))
		len++;
	while (base[b])
		b++;
	while (i++ <= len && find_num(str[len - i], base))
		result += my_power(b, i - 1) * (find_num(str[len - i], base) - 1);
	return (result * sign);
}

void	ft_putnbr_base(char **str, int size, int nbr, char *base)
{
	int		i;
	int		b;

	if (!nbr)
	{
		(*str)[0] = base[0];
		(*str)[1] = '\0';
		return ;
	}
	i = 0;
	b = 0;
	while (base[b])
		b++;
	while (nbr)
	{
		(*str)[size - i] = base[abs(nbr % b)];
		nbr /= b;
		i++;
	}
	(*str)[size + 1] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*result;
	int		b;
	int		size;

	b = 0;
	size = 0;
	if (check(base_from) || check(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	while (base_to[b])
		b++;
	while (num / my_power(b, size))
		size++;
	if (!num)
		size++;
	if (num < 0)
	{
		result = (char*)malloc(++size + 1);
		result[0] = '-';
	}
	else
		result = (char*)malloc(size + 1);
	ft_putnbr_base(&result, size - 1, num, base_to);
	return (result);
}
