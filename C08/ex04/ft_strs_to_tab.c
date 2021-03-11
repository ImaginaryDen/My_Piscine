/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:18:57 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/27 20:07:22 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					strl(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	char	*src_copy;
	int		i;

	i = 0;
	src_copy = (char*)malloc(sizeof(char) * (strl(src) + 1));
	if (!src_copy)
		return (NULL);
	while (src[i])
	{
		src_copy[i] = src[i];
		i++;
	}
	src_copy[i] = '\0';
	return (src_copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = 0;
	i = 0;
	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	while (i < ac)
	{
		result[i].size = strl(av[i]);
		result[i].str = ft_strdup(av[i]);
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = NULL;
	result[i].copy = NULL;
	return (result);
}
