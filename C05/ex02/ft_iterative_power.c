/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:39:51 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/24 20:21:45 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	result = 1;
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
