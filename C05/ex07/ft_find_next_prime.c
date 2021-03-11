/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:32:51 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/24 20:38:44 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb / 2)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
