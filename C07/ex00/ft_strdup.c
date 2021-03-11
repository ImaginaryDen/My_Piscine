/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:27:43 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/25 19:38:09 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strl(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*src_copy;
	int		i;

	i = 0;
	if (!strl(src))
		return (NULL);
	src_copy = (char*)malloc(sizeof(char) * (strl(src) + 1));
	if (!src_copy)
		return (NULL);
	while (src[i])
	{
		src_copy[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (src_copy);
}
