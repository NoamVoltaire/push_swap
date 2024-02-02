/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_compare_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:33:03 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/02 11:33:36 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	cmp_lst(t_block **lst)
{
	if ((*lst)->content < (*lst)->next->content)
		return (1);
	return (0);
}

int	cmp_stack(t_block **a, t_block **b)
{
	if ((*a)->content > (*b)->content
		/*&& (*b)->content (*a)->content->next*/)
		return (1);
	return (0);
}

int	cmp_whole(t_block **a, int len)
{
	int		nbr_of_elements;
	t_block	*tmp;

	tmp = (*a);
	nbr_of_elements = 0;
	while (cmp_lst(&tmp) && ((*a)->prev->content != tmp->content))
	{
		tmp = (tmp)->next;
		nbr_of_elements++;
	}
	// ft_printf("len %d\n nbroele %d\n", len, nbr_of_elements);
	if (nbr_of_elements == len - 1)
		return (-1);
	return (len - nbr_of_elements);
}