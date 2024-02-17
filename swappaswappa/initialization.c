/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:14:04 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/17 14:48:02 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	fillstack(t_block **a, int **array, int i)
{
	t_block	*tmp;
	// int		len;
	// int		**array;

	i -= 1;
	*a = ft_lstnew(array[i][0], array[i][1]);
	i--;
	while (i >= 0)
	{
		tmp = ft_lstnew(array[i][0], array[i][1]);
		ft_lstadd_front(&(*a), tmp);
		i--;
	}
	// printf("i = %d\n", i);
	// array = (int **)malloc(sizeof(int *) * len + 1);
	// if (!array)
		// ft_printf("oh hell nah\n");
	return ;
}