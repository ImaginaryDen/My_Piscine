/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:54:45 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 17:51:38 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int is_lower_alpha;
	int i;

	i = 0;
	is_lower_alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue;
		}
		is_lower_alpha = 0;
		break ;
	}
	return (is_lower_alpha);
}
