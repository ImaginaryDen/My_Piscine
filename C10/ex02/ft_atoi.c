/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:36:47 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 17:50:14 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

char	*no_space(char *str)
{
	while (is_space(*str))
	{
		printf("$\n");
		str++;
	}
	return (str);
}

int		is_signed(char **str)
{
	int i;

	i = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			i++;
		(*str)++;
	}
	return (i % 2);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	str = no_space(str);
	sign = is_signed(&str);
	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (sign)
		result *= -1;
	return (result);
}
