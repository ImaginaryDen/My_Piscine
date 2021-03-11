/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:34:30 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 18:38:29 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
