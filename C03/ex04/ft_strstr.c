/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:40:15 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/21 20:23:53 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zeroing(char *find, int *i, int *save, int *j)
{
	if (find)
		*i = *save;
	find = 0;
	*j = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		save;
	char	*find;

	if (!*to_find)
		return (str);
	i = 0;
	j = 0;
	find = 0;
	while (str[++i] && to_find[j])
		if (str[i] == to_find[j])
		{
			if (!j)
			{
				find = &str[i];
				save = i;
			}
			j++;
		}
		else
			zeroing(find, &i, &save, &j);
	return (find);
}
