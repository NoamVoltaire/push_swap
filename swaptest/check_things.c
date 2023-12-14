/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_things.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:01:50 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/14 20:28:15 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	static ft_strncmp(const char *s1, const char *s2, size_t n)
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

// void	check_overflows(t_block )

