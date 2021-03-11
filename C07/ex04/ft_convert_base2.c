/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:33:10 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 22:59:03 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int		find_num(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}

int		check(char *base)
{
	int i;
	int j;
	int norm;

	i = 0;
	norm = 0;
	if (!base[0] || !base[1])
		norm = 1;
	while (base[i] && !norm)
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			norm = 1;
		j = i;
		while (j && !norm)
		{
			j--;
			if (base[i] == base[j])
				norm = 1;
		}
		i++;
	}
	return (norm);
}

int		my_power(int nb, int power)
{
	if (!power)
		return (1);
	return (nb * my_power(nb, power - 1));
}

int		abs(int i)
{
	if (i < 0)
		i = -i;
	return (i);
}
