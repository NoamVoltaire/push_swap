/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:10:05 by noam              #+#    #+#             */
/*   Updated: 2023/12/13 15:26:08 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		sum;

	i = 0;
	sum = 0;
	while ((s1[i] || s2[i]) && sum == 0 && (i < n))
	{
		sum = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		i++;
	}
	return (sum);
}

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

