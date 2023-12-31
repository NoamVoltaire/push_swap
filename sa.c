/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:25:23 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/08 20:16:30 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include "ft_printf/ft_printf.h"


void	sa(t_block **lst)
{
	t_block	*tmp;

	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next = *lst;
	*lst = tmp;
	ft_printf("sa\n");
}

void	ra(t_block **lst, t_block *fk_lst)
{
	t_block	*tmp;
	// t_block *second;

	tmp = fk_lst->next;
	// second = *lst;
	while (tmp->next)
		tmp = tmp->next;
	// *lst
	tmp->next = fk_lst->next;
	//the number 5 actually doesn't point to anything so the nb 2 (lst) gets lost nad 5 point to tmp
	(*lst)->next = NULL;
	*lst = tmp;
	ft_printf("ra\n");
}

//ra but with prev and next

// void	ra(t_block **lst)
// {
// 	t_block	*tmp;
// 	// t_block *second;

// 	tmp = (*lst)->prev;
// 	// second = *lst;
// 	// while (tmp->next)
// 		// tmp = tmp->next;
// 	(*lst)->next = tmp->next;
// 	(*lst)->prev = tmp->prev;
// 	tmp->next = *lst;
// 	*lst = tmp;
// 	ft_printf("ra\n");
// }


// void	sb(t_block **lst)
// {
// 	t_block *tmp;

// 	tmp = (*lst)->next;
// 	(*lst)->next = tmp->next;
// 	tmp->next = *lst;
// 	*lst = tmp;
// }
