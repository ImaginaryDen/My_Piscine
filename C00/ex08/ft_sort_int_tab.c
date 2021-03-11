/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 15:53:19 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/18 16:01:07 by tjamis           ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int *min;
	int i;
	int j;

	i = 0;
	while (i != size)
	{
		j = i;
		min = &tab[i];
		while (j < size)
		{
			if (tab[j] < *min)
				min = &tab[j];
			j++;
		}
		ft_swap(&tab[i], min);
		i++;
	}
}
