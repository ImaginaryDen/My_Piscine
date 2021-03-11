/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:21:35 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 11:12:49 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int is_alpha;
	int i;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
			continue;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
			continue;
		}
		is_alpha = 0;
		break ;
	}
	return (is_alpha);
}
