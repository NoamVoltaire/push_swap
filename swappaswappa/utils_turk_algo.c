/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_turk_algo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:22:46 by noam              #+#    #+#             */
/*   Updated: 2024/02/17 14:37:26 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

t_block	*find_min(t_block *lst, int len)
{
	t_block	*min;
	t_block	*tmp;

	min = lst;
	tmp = lst->next;
	while (len--)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	before_push(t_block **lst, t_block *target_node)
{
	while ((*lst)->content != target_node->content)
	{
		if (target_node->above_median)
			ra(lst);
		else
			rra(lst);
	}
	// if ((*lst)->content > target_node->content)
		// ra(lst);
}

void	set_node(t_block *a, t_block *b, t_big *header_node)
{
	t_block		*tmp_a;
	t_block		*the_node;
	long		best_match;
	int			i;
	int			j;

	i = header_node->len_b;
	while (i--)
	{

		best_match = 2147483647;
		tmp_a = a;
		j = header_node->len_a;
		// printf("3nd\n");
		// printf("lena = %d lenb = %d\n", header_node->len_a, header_node->len_b);
		while (j--)
		{
			// printf("best match = %ld\n", best_match);
			if (tmp_a->content > b->content && tmp_a->content < best_match)
			{
				best_match = tmp_a->content;
				the_node = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (best_match == 2147483647)
			b->node = find_min(a, header_node->len_a);
		else
			b->node = the_node;
		// printf("b->node->content = %ld\n", b->node->content);
		b = b->next;
	}
}

void	indexing(t_block *lst, int len)
{
	int			i;
	int			median;

	i = 0;
	if (!lst)
		return ;
	median = len / 2;
		// printf("len = %d\n", len);
	while (i < len)
	{
		// printf("2nd\n");
		lst->position = i;
		if (i < median)
			lst->above_median = 1;
		else
			lst->above_median = 0;
		lst = lst->next;
		i++;
	}
}

void	init_stacks(t_block *a, t_block *b, t_big *header_node)
{
	indexing(a, header_node->len_a);
	indexing(b, header_node->len_b);
	set_node(a, b, header_node);
}

void	push_bucks_to_a(t_block **a, t_block **b, t_big **header_node)
{
	before_push(a, (*b)->node);
	// if ((*a)->content > (*b)->content)
		// ra(a);
	pb(a, b);
	(*header_node)->len_a++;
	(*header_node)->len_b--;
}