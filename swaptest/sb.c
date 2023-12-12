/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:25:23 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/10 12:09:49 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
// #include "ft_printf/ft_printf.h"


void	sb(t_block **lst)
{
	t_block	*tmp;

	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->prev = (*lst)->prev;
	(*lst)->prev = tmp;
	tmp->next = *lst;
	*lst = tmp;
	ft_printf("sa\n");
}

// void	ra(t_block **lst) // ?? I DID IT TOTALLY WRONG AAARGHHH
// {
// 	t_block	*tmp;

// 	tmp = (*lst)->prev;
// 	(*lst)->next->prev = tmp;
// 	tmp->prev->next = *lst;
	
// 	tmp->next = (*lst)->next;
// 	(*lst)->next = tmp;
// 	(*lst)->prev = tmp->prev;
// 	tmp->prev = *lst;

// 	*lst = tmp;
// 	ft_printf("ra\n");
// }

void	pb(t_block **b_lst, t_block **lst)
{
	t_block *tmp;

	tmp = (*lst)->next;
	if (!(*b_lst))
		*b_lst = ft_lstnew((*lst)->content);
	else
	{
		tmp = ft_lstnew((*lst)->content);
		ft_lstadd_front(&(*b_lst), tmp);
	}
	(*lst)->prev->next = (*lst)->next;
	(*lst)->next->prev = (*lst)->prev;
	*lst = (*lst)->next;
	// free (lst);
	
	/*else
		fn new (lst->content ) for b_lst*/
	// lst = b_lst;
	// b_lst = tmp;
}

void	rb(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->next;
	ft_printf("ra\n");
}

void	rrb(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->prev;
	ft_printf("ra\n");
}
// void	sb(t_block **lst)
// {
// 	t_block *tmp;

// 	tmp = (*lst)->next;
// 	(*lst)->next = tmp->next;
// 	tmp->next = *lst;
// 	*lst = tmp;
// }
