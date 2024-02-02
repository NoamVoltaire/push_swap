/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:14:04 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/02 11:25:37 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	fillstack(t_block **a, char **args, int i)
{
	t_block	*tmp;
	// int		len;
	// int		**array;

	i -= 1;
	*a = ft_lstnew(ft_atoi(args[i]));
	i--;
	while (i >= 0)
	{
		tmp = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_front(&(*a), tmp);
		i--;
	}
	// array = (int **)malloc(sizeof(int *) * len + 1);
	// if (!array)
		// ft_printf("oh hell nah\n");
	return ;
}