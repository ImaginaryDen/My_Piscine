/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:31:43 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 23:39:49 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int is_print_alpha;
	int i;

	i = 0;
	is_print_alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= 126)
		{
			i++;
			continue;
		}
		is_print_alpha = 0;
		break ;
	}
	return (is_print_alpha);
}
