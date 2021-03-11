/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mcg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:58:18 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 22:39:14 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	error_mcg(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_error(char *name, char *tr_error)
{
	error_mcg(basename(name));
	error_mcg(": ");
	error_mcg(tr_error);
	error_mcg(": ");
	error_mcg(strerror(errno));
	error_mcg("\n");
}
