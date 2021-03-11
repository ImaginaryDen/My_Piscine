/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:53:03 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/03 11:44:48 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

void	ft_sort_string_tab(char **tab)
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
			if (my_strcmp(*min, tab[j]) > 0)
				min = &tab[j];
			j++;
		}
		swap(min, &tab[i]);
		i++;
	}
}
