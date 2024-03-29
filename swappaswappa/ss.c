/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:30:03 by noam              #+#    #+#             */
/*   Updated: 2024/02/14 14:56:23 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	ss(t_block **a, t_block **b)
{
	sa(&(*a));
	sb(&(*b));
	write(1, "ss\n", 3);
}

void	rr(t_block **a, t_block **b)
{
	(*a) = (*a)->next;
	(*b) = (*b)->next;
	write(1, "rr\n", 3);
}

void	rrr(t_block **a, t_block **b)
{
	(*a) = (*a)->prev;
	(*b) = (*b)->prev;
	write(1, "rrr\n", 4);
}
