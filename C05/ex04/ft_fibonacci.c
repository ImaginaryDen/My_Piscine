/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:40:16 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/23 20:13:08 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
