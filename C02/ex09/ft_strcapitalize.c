/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:46:41 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/20 20:13:41 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	set_low(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c -= 'A' - 'a';
	}
	return (c);
}

char	set_ap(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c += 'A' - 'a';
	}
	return (c);
}

int		is_alpha(char c)
{
	c = set_low(c);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_num(char c)
{
	c = set_low(c);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_word;

	i = 0;
	is_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) || is_num(str[i]))
		{
			if (is_word)
			{
				str[i] = set_ap(str[i]);
				is_word = 0;
			}
			else
				str[i] = set_low(str[i]);
		}
		else
			is_word = 1;
		i++;
	}
	return (str);
}
