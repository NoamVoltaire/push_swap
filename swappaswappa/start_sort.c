/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:30:52 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/04 13:56:02 by noam             ###   ########.fr       */
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

void	start_sort(t_block **a, t_block **b, int len)
{
	if (len <= 1)
		return ;
	else if (cmp_whole(a, len) == -1)
		return ;
	else if (len == 2)
	{
		if (!cmp_lst(a))
			sa(a);
	}
	else if (len == 3)
		sort_three(a);
	else
		sort_big(a, b, len);
	// return ;

}
