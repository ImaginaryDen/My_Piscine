/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:21:28 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/26 22:00:05 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strc(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		strl(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		over_size(int size, char **strs, char *sep)
{
	int o_size;

	if (!size)
		return (1);
	o_size = 1;
	size--;
	while (size)
	{
		o_size += strl(strs[size]);
		o_size += strl(sep);
		size--;
	}
	o_size += strl(strs[size]);
	return (o_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		size_res;

	(void)strs;
	size_res = 1;
	result = (char*)malloc(over_size(size, strs, sep));
	if (result)
		return (NULL);
	*result = '\0';
	if (!size)
		return (result);
	i = 0;
	while (i < size)
	{
		if (i)
			result = strc(result, sep);
		result = strc(result, strs[i]);
		i++;
	}
	return (result);
}
