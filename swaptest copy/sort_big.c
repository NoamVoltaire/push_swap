/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:30:51 by noam              #+#    #+#             */
/*   Updated: 2024/01/15 19:14:09 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

	//array is sorted, it's a 2d array with index and value
	// we uses array to compare with a, and push the lowest quarter to b
	//divide len by 4 and find the first lowest quarter in a, and push it to b, then second lowest quarter, etc. keeping 3 nodes in a.
	//then we sort b into an array, and push it back in the right order in a
	
	
void	push_chunks_to_a(t_block **a, t_block **b, long **array, int chunk, int prechunk)
{
	t_block	*tmp;
	int		j;

	tmp = (*a)->prev;
	ft_printf("prechunk = %d\n", prechunk);
	while(tmp->content != (*a)->content && array[j])
	{
		j = 0;
		while (array[j])
		{	
			if (array[j][0] <= chunk && array[j][0] > prechunk)
			{
				pa(a, b);
				// ft_printf("pb\n");
			}
			else
			{
				ra(a);
				// ft_printf("ra\n");
			}
			ft_printf("j = %d\n", j);
			// *a = (*a)->next;
			j++;
		}
	}
}
void	sort_big(t_block **a, t_block **b, int len, long **array)
{
	// int	pushes;
	int	chunk;
	int	prechunk;
	int	i;

	// pushes = 0;
	i = 0;
	while (i < 4)
	{
		i++;
		chunk = (len * i) / 4;
		prechunk = (len * (i - 1)) / 4;
		ft_printf("gas = %d\n", chunk);
		push_chunks_to_a(a, b, array, chunk, prechunk);
		// pushes += chunk;
		
	// while (pushes < chunk)
	// {
		
	// 	pushes++;
	// }
	}
	
}