/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:34:31 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/16 22:26:18 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

// int	len_stack(t_block *lst)
// {
// 	t_block	*last;
// 	t_block	*iter;
// 	int		i;

// 	i = 1;
// 	last = lst->prev;
// 	iter = lst;
// 	while (iter != last)
// 	{
// 		i++;
// 		iter = iter->next;
// 	}
// 	return (i);
// }

void	sa(t_block **lst)
{
	t_block	*tmp;

	if ((*lst)->next->next == (*lst))
	{
		(*lst) = (*lst)->next;
		return ;
	}
	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next->prev = tmp;
	tmp->next = *lst;
	tmp->prev = (*lst)->prev;
	tmp->prev->next = tmp;
	(*lst)->prev = tmp;
	*lst = tmp;
	// ft_printf("sa\n");
	write(1, "sa\n", 3);
}
void	pa(t_block **lst, t_block **b_lst)
{
	t_block	*tmp;

	tmp = (*lst)->next;
	if ((*lst)->next == *lst)
	{
		if (!(*b_lst))
			*b_lst = ft_lstnew((*lst)->content, (*lst)->index);
		else
		{
			tmp = ft_lstnew((*lst)->content, (*lst)->index);
			ft_lstadd_front(&(*b_lst), tmp);
		}
		free (*lst);
		*lst = NULL;
	}
	else
	{
	if (!(*b_lst))
		*b_lst = ft_lstnew((*lst)->content, (*lst)->index);
	else
	{
		tmp = ft_lstnew((*lst)->content, (*lst)->index);
		ft_lstadd_front(&(*b_lst), tmp);
	}
	(*lst)->prev->next = (*lst)->next;
	(*lst)->next->prev = (*lst)->prev;
	*lst = (*lst)->next;
	}
	write(1, "pb\n", 3);
}

void	ra(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->next;
	// ft_printf("ra\n");
	write(1, "ra\n", 3);
}

void	rra(t_block **lst)
{
	t_block	*tmp;

	*lst = (*lst)->prev;
	// ft_printf("rra\n");
	write(1, "rra\n", 4);
}