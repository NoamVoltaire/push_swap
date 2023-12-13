/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:58:23 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/13 18:22:07 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sort_three(t_block **lst)
{
	if (cmp_whole(lst, 3) == -1)
		return ;
	if (!cmp_lst(lst) && !cmp_lst((&(*lst)->next)))
	{
		sa(&(*lst));
		rra(&(*lst));
	}
	else if (cmp_lst((&(*lst)->prev)) && !cmp_lst((&(*lst))))
		ra(&(*lst));
	else if (cmp_lst((&(*lst)->prev)) && cmp_lst((&(*lst))))
		rra(&(*lst));
	else if (!cmp_lst(lst))
		sa(&(*lst));
	else
	{
		rra(&(*lst));
		sa(&(*lst));
	}
}
void	unsort_three(t_block **lst)
{
	// if (cmp_whole(lst, 3))
	// 	return ;
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

// void	sort_six(t_block **a, t_block **b, int len)
// {
// 	if (len == 6)
// 	{
// 		while (len-- > 4)	
// 			pa(&(*a), &(*b));
// 		sort_three(a);
// 		sort_three(b);
// 		rr(&(*a), &(*b));
// 		while(len)
// 		{
// 			if (cmp_stack(a, b) && !cmp_stack(&(*a)->prev, &(*b)) && len--)
// 				pb(&(*a), &(*b));
// 			else
// 				ra(&(*a));
// 		}
// 	}
// }

void	sort_six(t_block **a, t_block **b, int len)
{
	int	sum;
	int	tmp;
	
	// sum = cmp_whole(a, len);
	// ft_printf("usm = %d\n", sum);
	tmp = 0;
	if (cmp_whole(a, len) == -1)
	return;
	while (tmp++ != len/2)
		pa(a, b);
		rrb(b);
	// unsort_three (b);
	
	
	
	/*
	int	sum;
	int	tmp;

	sum = cmp_whole(a, len);
	tmp = sum;
	ft_printf("usm = %d\n", sum);
	if (sum == -1)
		return ;
	while (sum--)
		rra(a);
	sum = tmp;
	while (tmp--)
		pa(a, b);
	tmp = sum;
	unsort_three(b);
	// rra(a);
	// tmp--;
	// while (sum--)
	// 	pb(a, b);
	// while (tmp--)
	// 	ra(a);
	
	
	
	// else
	ft_printf("noooo\n");
	*/
}

// 12345
// 23451 rra
// 34512 rra rra
// 45123 ra ra
// 51234 ra

// 13425  pa 1 3425 + rra 1 4253 + sa  1  

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