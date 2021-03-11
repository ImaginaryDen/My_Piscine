/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:10:17 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/21 18:51:18 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
	unsigned int dest_len;
	unsigned int count;

	src_len = 0;
	dest_len = 0;
	count = 0;
	while (src[src_len])
		src_len++;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (src_len + size);
	while (count + dest_len < size - 1)
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (src_len + dest_len);
}
