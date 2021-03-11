/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:59:24 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/05 22:52:51 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	void *result;

	if (!root)
		return (NULL);
	if ((result = btree_search_item(root->left, data_ref, cmpf)) != NULL)
		return (result);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	if ((result = btree_search_item(root->right, data_ref, cmpf)) != NULL)
		return (result);
	return (NULL);
}
