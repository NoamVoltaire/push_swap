/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:01:07 by noam              #+#    #+#             */
/*   Updated: 2023/12/09 22:23:24 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

t_block	*ft_lstnew(int content)
{
	t_block	*mynode;

	mynode = (t_block *)malloc(sizeof(t_block));
	if (mynode == NULL)
		return (NULL);
	mynode->content = content;
	mynode->next = mynode;
	mynode->prev = mynode;
	return (mynode);
}
