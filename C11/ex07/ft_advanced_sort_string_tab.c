/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:53:03 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/02 19:06:25 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	**min;
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		min = &tab[i];
		j = i + 1;
		while (tab[j])
		{
			if (cmp(*min, tab[j]) > 0)
				min = &tab[j];
			j++;
		}
		swap(min, &tab[i]);
		i++;
	}
}
