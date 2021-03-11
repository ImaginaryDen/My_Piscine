/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:41:28 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/03 13:03:02 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_check_null(int i, int nbr_err)
{
	if (!i)
	{
		if (nbr_err)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}
