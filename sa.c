/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:25:23 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/08 15:56:37 by nvoltair         ###   ########.fr       */
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

void	ra(t_block **lst)
{
	t_block	*tmp;
	t_block *second;

	tmp = (*lst)->next;
	second = *lst;
	while (tmp->next)
		tmp = tmp->next;
	(*lst)->next = tmp->next;
	tmp->next = second;
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
