/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:32:27 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/03 23:34:45 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	add(char *str, int arg_1, int arg_2)
{
	if (str[0] != '+' || str[1] != '\0')
		return (0);
	ft_putnbr(arg_1 + arg_2);
	return (1);
}

int	diff(char *str, int arg_1, int arg_2)
{
	if (str[0] != '-' || (str[1] != '\0'))
		return (0);
	ft_putnbr(arg_1 - arg_2);
	return (1);
}

int	mult(char *str, int arg_1, int arg_2)
{
	if (str[0] != '*' || (str[1] != '\0'))
		return (0);
	ft_putnbr(arg_1 * arg_2);
	return (1);
}

int	div(char *str, int arg_1, int arg_2)
{
	if (str[0] != '/' || (str[1] != '\0'))
		return (0);
	if (ft_check_null(arg_2, 1))
		ft_putnbr(arg_1 / arg_2);
	return (1);
}

int	mod(char *str, int arg_1, int arg_2)
{
	if (str[0] != '%' || (str[1] != '\0'))
		return (0);
	if (ft_check_null(arg_2, 0))
		ft_putnbr(arg_1 % arg_2);
	return (1);
}
