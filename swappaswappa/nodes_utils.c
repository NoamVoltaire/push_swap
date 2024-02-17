/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:18:48 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/13 23:41:02 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

t_block	*ft_lstnew(int content, int index)
{
	t_block	*mynode;

	mynode = (t_block *)malloc(sizeof(t_block));
	if (mynode == NULL)
		return (NULL);
	mynode->content = content;
	mynode->index = index;
	mynode->next = mynode;
	mynode->prev = mynode;
	return (mynode);
}

void	ft_lstadd_front(t_block **lst, t_block *new)
{//to do : what if *lst NULL
	new->next = (*lst);
	new->prev = (*lst)->prev;
	(*lst)->prev->next = new;
	(*lst)->prev = new;
	*lst = new;
}
