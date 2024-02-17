/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:20:16 by noam              #+#    #+#             */
/*   Updated: 2024/02/16 23:04:50 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

/*	Phase 1
we want a function that places the the orders of the nodes (name it index)
so that we can start by placing the nodes in B
in big chunks (len/4 or len/6)
using the index with ra and pb (and rb and rr if we're good)
until A is at 3
*/
t_big	*init_header_node(int len)
{
	t_big	*to_be_header_node;

	to_be_header_node = malloc(sizeof(t_big));
	to_be_header_node->len_a = 3;
	to_be_header_node->len_b = len - 3;
	return (to_be_header_node);
}

void	push_bucks_to_b(t_block **a, t_block **b, int len)
{
	int	i;
	int	chunk;
	int	runtime;
	int pushes;

	i = 1;
	pushes = 0;
	runtime = len;
	while (runtime > 3)
	{
		chunk = (len / 4) * i;
		while (pushes < chunk && runtime > 3)
		{
			if ((*a)->index < chunk && ++pushes && --runtime)
				pa(a, b);
			// else if ((*a)->index < ((len / 4) * (i + 1)) && ++pushes && --runtime)
			// {
			// 	pa(a, b);
			// 	printf("hello\n");
			// 	if ((*a)->index >= ((len / 4) * (i + 1)))
			// 		rr(a, b);
			// 	else
			// 		rb(b);
			// }
			else
				ra(a);
		}
		i++;
	}
}

void	sort_big(t_block **a, t_block **b, int len)
{
	t_big	*header_node;

	header_node = init_header_node(len);
	if (cmp_whole(a, len) != -1)
	{
		push_bucks_to_b(a, b, len);
		sort_three(a);
	ft_lstiter(*a, print);
	ft_lstiter(*b, print);
		while (*b)
		{
			init_stacks(*a, *b, header_node);
			printf("hello\n");
			push_bucks_to_a(a, b, &header_node);
		}
	}
		
}