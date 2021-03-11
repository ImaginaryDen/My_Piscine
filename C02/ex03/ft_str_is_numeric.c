/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:41:13 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 10:48:09 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int is_digit;
	int i;

	i = 0;
	is_digit = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue;
		}
		is_digit = 0;
		break ;
	}
	return (is_digit);
}
