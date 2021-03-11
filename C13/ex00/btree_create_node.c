/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjamis <tjamis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:03:22 by tjamis            #+#    #+#             */
/*   Updated: 2021/03/05 22:30:30 by tjamis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	tree->left = NULL;
	tree->right = NULL;
	tree->item = item;
	return (tree);
}
