/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:58:23 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/12 18:02:44 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sort_three(t_block **lst)
{
	if (cmp_lst(lst) && cmp_lst((&(*lst)->next)))
	{
		sa(&(*lst));
		rra(&(*lst));
	}
	else if (!cmp_lst((&(*lst)->prev)) && cmp_lst((&(*lst))))
		ra(&(*lst));
	else if (!cmp_lst((&(*lst)->prev)) && !cmp_lst((&(*lst))))
		rra(&(*lst));
	else if (cmp_lst(lst))
		sa(&(*lst));
	else
	{
		rra(&(*lst));
		sa(&(*lst));
	}
}
void	sort_six(t_block **a, t_block **b, int len)
{
	if (len == 6)
	{
		while (len-- > 4)	
			pa(&(*a), &(*b));
		sort_three(a);
		sort_three(b);
		rr(&(*a), &(*b));
		while(len)
		{
			if (cmp_stack(a, b) && !cmp_stack(&(*a)->prev, &(*b)) && len--)
				pb(&(*a), &(*b));
			else
				ra(&(*a));
		}
	}
}

// void	mergesort(t_block **a, t_block **b, int strt, int len)
// {
// 	int	mid;

// 	mid = (len + strt) / 2;
// 	if (mid <= 1)
// 		return ;
// 	mergesort(a, b, strt, mid);
// 	mergesort(a, b, mid, len);
// 	merge(a, b, strt, mid, len);
// }

// void	merge(t_block **a, t_block **b, int start, int mid, int end)
// {
	// int push_moves;
	// int	rotate_moves;

	// push_moves = 0;
	// rotate_moves = 0;
	// while (rotate_moves != mid - start + 1)
	// {
	// if (cmp_lst(a))
	// 	sa(&(*a));
	// ra(&(*a));
	// rotate_moves++;
		
	// }
		
// }