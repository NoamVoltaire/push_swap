/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:36:33 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/16 22:26:30 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sb(t_block **lst)
{
	t_block	*tmp;

	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->prev = (*lst)->prev;
	(*lst)->prev = tmp;
	tmp->next = *lst;
	*lst = tmp;
	// ft_printf("sa\n");
	write(1, "sb\n", 3);
}
void	pb(t_block **b_lst, t_block **lst)
{
	t_block *tmp;

	if (!*lst)
		return ;
	tmp = (*lst);
	if ((*lst)->next == *lst)
	{
		tmp = ft_lstnew((*lst)->content, (*lst)->index);
		ft_lstadd_front(&(*b_lst), tmp);
		(*lst)->prev->next = (*lst)->next;
		(*lst)->next->prev = (*lst)->prev;
		free (*lst);
		// free (lst);
		*(lst) = NULL;
		write(1, "pb\n", 3);
		return ;
	}
	else
	{
		tmp = ft_lstnew((*lst)->content, (*lst)->index);
		ft_lstadd_front(&(*b_lst), tmp);
		(*lst)->prev->next = (*lst)->next;
		(*lst)->next->prev = (*lst)->prev;
	}
	*lst = (*lst)->next;
	write(1, "pa\n", 3);
}
void	rb(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->next;
	// ft_printf("rb\n");
	write(1, "rb\n", 3);
}

void	rrb(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->prev;
	// ft_printf("rrb\n");
	write(1, "rrb\n", 4);
}