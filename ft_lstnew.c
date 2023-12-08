/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:01:07 by noam              #+#    #+#             */
/*   Updated: 2023/12/08 14:02:47 by nvoltair         ###   ########.fr       */
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
	mynode->next = NULL;
	return (mynode);
}
