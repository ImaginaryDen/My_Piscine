/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:36:53 by tjamis            #+#    #+#             */
/*   Updated: 2021/02/24 21:07:35 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int del;

	del = 1;
	while (del * del <= nb && del * del > 0)
	{
		if (del * del == nb)
			return (del);
		del++;
	}
	return (0);
}
