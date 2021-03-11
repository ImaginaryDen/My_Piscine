/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:50:58 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 18:18:44 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int sort;
	int i;

	if (length <= 2)
		return (1);
	sort = f(tab[0], tab[1]);
	i = 1;
	while (i < length - 1)
	{
		if (sort == 0)
			sort = f(tab[i], tab[i + 1]);
		if (!(!f(tab[i], tab[i + 1]) ||
			!(sort < 0 ^ f(tab[i], tab[i + 1]) < 0)))
			return (0);
		i++;
	}
	return (1);
}
