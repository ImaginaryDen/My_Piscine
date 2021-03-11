/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:02:50 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 15:41:07 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int is_upper_alpha;
	int i;

	i = 0;
	is_upper_alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue;
		}
		is_upper_alpha = 0;
		break ;
	}
	return (is_upper_alpha);
}
