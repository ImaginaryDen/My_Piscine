/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:32:03 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/03 23:34:13 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int arg_1;
	int arg_2;
	int i;
	int (*fun_calc[5])(char *, int, int);

	if (argc != 4)
		return (0);
	fun_calc[0] = &add;
	fun_calc[1] = &diff;
	fun_calc[2] = &div;
	fun_calc[3] = &mod;
	fun_calc[4] = &mult;
	arg_1 = ft_atoi(argv[1]);
	arg_2 = ft_atoi(argv[3]);
	i = 0;
	while (i < 5)
	{
		if (fun_calc[i](argv[2], arg_1, arg_2))
			return (0);
		i++;
	}
	ft_putnbr(0);
	return (0);
}
