/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:26:53 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/19 22:15:24 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	if (*a == *b)
		return ;
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
