/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_things.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:01:50 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/12 16:13:59 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	check_things(char **arg)
{
	long	index;
	int		i;

	i = 1;
	index = 0;
	while (arg[i])
	{
		index = 1;
		while (arg[i + index])
		{
		if (!ft_strncmp(arg[i], arg[i + index], 12))
			errors();
		index++;
		}
	i++;
	}
}
