/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:40:26 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/08 21:29:38 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include <unistd.h>

void	free_lst(t_block **lst)
{
	t_block	*tmp;
	if (!(*lst) || !lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(tmp);
		*lst = tmp;
	}
	*lst = NULL;
}

int	errors(t_block **a, t_block **b)
{
	if ((*a) != NULL)
		free_lst(a);
	if ((*b) != NULL)
		free_lst(b);
	write(1, "Error\n", 6);
	exit(1);
}
