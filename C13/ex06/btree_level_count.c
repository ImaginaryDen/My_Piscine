/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:20:00 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/05 23:37:51 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int	count_left;
	int	count_right;

	if (!root)
		return (0);
	count_left = btree_level_count(root->left);
	count_right = btree_level_count(root->right);
	if (count_right > count_left)
		return (1 + count_right);
	return (1 + count_left);
}
