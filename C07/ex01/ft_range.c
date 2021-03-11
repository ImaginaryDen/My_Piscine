/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:53:19 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 18:47:11 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *mas;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	mas = (int *)malloc(sizeof(int) * (max - min));
	if (!mas)
		return (NULL);
	while (min < max)
	{
		mas[i] = min;
		i++;
		min++;
	}
	return (mas);
}
